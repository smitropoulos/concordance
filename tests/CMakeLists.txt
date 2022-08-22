include(GoogleTest)

add_executable(FileInputTest FileInputTest.cpp)
target_link_libraries(FileInputTest GTest::gtest_main concordance)
gtest_discover_tests(FileInputTest)

add_custom_command(
        TARGET FileInputTest PRE_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy
        ${CMAKE_SOURCE_DIR}/tests/artifacts/testInputFile
        ${CMAKE_CURRENT_BINARY_DIR}/testInputFile)

add_executable(TokenizerTest TokenizerTest.cpp)
target_link_libraries(TokenizerTest GTest::gtest_main concordance)
gtest_discover_tests(TokenizerTest)

add_executable(StringUtilsTests StringUtilsTests.cpp)
target_link_libraries(StringUtilsTests GTest::gtest_main concordance)
gtest_discover_tests(StringUtilsTests)

add_executable(WordMapTests WordMapTest.cpp)
target_link_libraries(WordMapTests GTest::gtest_main concordance)
gtest_discover_tests(WordMapTests)
