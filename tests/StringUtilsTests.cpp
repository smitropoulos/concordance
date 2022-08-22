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

TEST(StringUtilTests, whiteSpace) {

    char wspace = ' ';
    ASSERT_TRUE(String_utilities::isWhitespace(wspace));

    wspace = '\n';
    ASSERT_TRUE(String_utilities::isWhitespace(wspace));
}

TEST(StringUtilTests, lowercase) {

    std::string inp = "RaNdOm CapiTaLiZaTion";
    auto ret = String_utilities::toLower(inp);

    ASSERT_STREQ(ret.c_str(), "random capitalization");
}
