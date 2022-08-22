#include "FileInput.h"
#include <fstream>


namespace IO {
std::string FileInput::read(const std::string_view& input) {

    std::ifstream inputFile;
    std::string output;

    inputFile.open(input.data());

    if ( !inputFile )
    {
        throw std::runtime_error("Error opening file to read");
    }

    char buffer;
    while ( inputFile )
    {
        buffer = inputFile.get();
        output.push_back(buffer);
    }

    output.pop_back(); // Pop EOF char
    inputFile.close();
    return output;
}
} // IO