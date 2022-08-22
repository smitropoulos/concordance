#include <gtest/gtest.h>
#include "../src/WordMapConstructor.h"


TEST(WordMapTests, construction) {

    std::vector<std::string> sentences{"Sentence one", "Sentence two"};
    WordMapConstructor wordMapConstructor;
    wordMapConstructor.createWordMap(sentences);

    auto retMap = wordMapConstructor.getWordMap();

    ASSERT_TRUE(retMap.size() == 3);
    ASSERT_EQ(retMap.at("sentence").count, 2);
    ASSERT_EQ(retMap.at("sentence").position.at(0), 1);
    ASSERT_EQ(retMap.at("sentence").position.at(1), 2);
    ASSERT_EQ(retMap.at("one").count, 1);
}