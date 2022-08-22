#include "SentenceTokenizer.h"
#include "FileInput.h"
#include "WordDetails.h"
#include "Outputter.h"
#include "WordMapConstructor.h"
#include <iostream>


int main(int argc, char **argv) {

    if ( argc < 2 )
    {
        std::cerr << "Usage: " << argv[0] << " textFile_to_read" << std::endl;
        return 1;
    }

    std::string_view inputFileName{argv[1]};

    IO::FileInput file_in;

    std::string inputFromFile;

    inputFromFile = file_in.read(inputFileName);

    String_utilities::SentenceTokenizer tkz(inputFromFile);

    const auto& sentences = tkz.getSentences();

    WordMapConstructor wordMapConstructor;
    wordMapConstructor.createWordMap(sentences);

    IO::Outputter::print(wordMapConstructor.getWordMap(), wordMapConstructor.getLongestWord());

    return 0;
}