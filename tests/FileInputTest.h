
#ifndef _FILEINPUTTEST_H_
#define _FILEINPUTTEST_H_

#include "../src/FileInput.h"
#include <gtest/gtest.h>
#include <string>


class FileInput_Fixture : public ::testing::Test {
  protected:
    std::string_view inputFileName{"testInputFile"};
    std::string_view
        input
        {"Given an arbitrary text document written in English, write a program that will generate a concordance, i.e. an alphabetical list of all word occurrences, labeled with word frequencies.\nBonus: label each word with the sentence numbers in which each occurrence appeared."};
    IO::FileInput file_in;

    std::string inputFromFile;

    void SetUp() override {

        inputFromFile = file_in.read(inputFileName);
    }
};
#endif //_FILEINPUTTEST_H_
