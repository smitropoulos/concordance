#include <gtest/gtest.h>
#include "../src/StringUtils.h"


TEST(StringUtilTests, punctuation) {

    std::string inp = "This is a test,";
    String_utilities::removePunctInEnd(inp);
    ASSERT_STREQ(inp.c_str(), "This is a test");

    inp = "#";
    auto res = String_utilities::removePunct(inp);
    ASSERT_STREQ(res.c_str(), "");
}

TEST(StringUtilTests, lowercase) {

    std::string inp = "RaNdOm CapiTaLiZaTion";
    auto ret = String_utilities::toLower(inp);

    ASSERT_STREQ(ret.c_str(), "random capitalization");
}

TEST(StringUtilTests, trimming)
{
    std::string inp = "(,.[;";
    auto ret = String_utilities::removePunct(inp);
    ASSERT_STREQ(ret.c_str(), ".");
}