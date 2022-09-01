#include "SentenceTokenizer.h"
#include "StringUtils.h"


using namespace String_utilities;

SentenceTokenizer::SentenceTokenizer(const std::string& input) {

    auto start = 0;
    auto inputTrimmed = String_utilities::removeWhitespace(input);

    for ( int i = 0; i < inputTrimmed.length(); i++ )
    {
        //if ( inputTrimmed[i] == '\n' )
        //{
        //    start = i + 1;
        //    continue;
        //}

        //check for a period
        if ( inputTrimmed[i] == '.' )
        {
            // check next char is whitespace
            if ( inputTrimmed.begin() + i + 1 != inputTrimmed.end())
            {
                if ( isspace(*(inputTrimmed.begin() + i + 1)))
                {
                    //complete sentence
                    if ( *(inputTrimmed.begin() + i + 1) == '\n' )
                    {
                        auto str = inputTrimmed.substr(start, i - start);
                        sentences.push_back(str);
                        start = i + 2;
                        continue;
                    }
                    // check next char is not whitespace and is a capital letter
                    if ( inputTrimmed.begin() + i + 2 != inputTrimmed.end())
                    {
                        if ( isupper(*(inputTrimmed.begin() + i + 2)))
                        {
                            // this is a complete sentence
                            auto str = inputTrimmed.substr(start, i - start);
                            sentences.push_back(str);
                            start = i + 2;
                        }
                    }
                }
            }
            else if ( inputTrimmed.begin() + i + 1 == inputTrimmed.end())  // the last sentence
            {
                auto str = inputTrimmed.substr(start, i - start);
                sentences.push_back(str);
            }
        }
    }
}

const std::vector<std::string>& SentenceTokenizer::getSentences() const {

    return sentences;
}
