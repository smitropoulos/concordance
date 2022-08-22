#include "WordMapConstructor.h"
#include <sstream>
#include "StringUtils.h"


void WordMapConstructor::createWordMap(const std::vector<std::string>& sentences) {

    std::string interm;
    unsigned int i{1};
    for ( const auto& sentence: sentences )
    {
        std::stringstream ss;
        ss << sentence;
        while ( getline(ss, interm, ' '))
        {
            interm = String_utilities::toLower(interm);
            interm = String_utilities::removePunct(interm);
            if ( wordMap.find(interm) != wordMap.end())
            {
                wordMap.at(interm).count += 1;
                wordMap.at(interm).position.push_back(i);
            }
            else
            {
                wordMap.emplace(interm, WordDetails{1, {i}});
            }
            longestWord = std::max(interm.size(), longestWord);
        }
        i++;
    }
}

const std::map<std::string, WordDetails>& WordMapConstructor::getWordMap() const {

    return wordMap;
}

size_t WordMapConstructor::getLongestWord() const {

    return longestWord;
}
