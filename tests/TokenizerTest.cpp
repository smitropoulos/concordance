#include "FileInputTest.h"
#include "../src/SentenceTokenizer.h"


TEST_F(FileInput_Fixture, SentenceTokenizing) {

    String_utilities::SentenceTokenizer tknz(inputFromFile);
    auto sentences = tknz.getSentences();
    ASSERT_STREQ(
        "Given an arbitrary text document written in English, write a program that will generate a concordance, i.e. an alphabetical list of all word occurrences, labeled with word frequencies",
        sentences[0].c_str());
    ASSERT_STREQ("Bonus: label each word with the sentence numbers in which each occurrence appeared",
                 sentences[1].c_str());
}