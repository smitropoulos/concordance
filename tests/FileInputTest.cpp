
#include "FileInputTest.h"


TEST_F(FileInput_Fixture, io) {

    ASSERT_STREQ(input.data(), file_in.read(inputFileName).c_str());
}