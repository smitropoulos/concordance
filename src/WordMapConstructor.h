#ifndef _WORDMAPCONSTRUCTOR_H_
#define _WORDMAPCONSTRUCTOR_H_
#include <vector>
#include <string>
#include <map>
#include "WordDetails.h"


class WordMapConstructor {
    std::map<std::string, WordDetails> wordMap;
    size_t longestWord{};
  public:
    void createWordMap(const std::vector<std::string>& sentences);
    [[nodiscard]] const std::map<std::string, WordDetails>& getWordMap() const;
    [[nodiscard]] size_t getLongestWord() const;
};

#endif //_WORDMAPCONSTRUCTOR_H_
