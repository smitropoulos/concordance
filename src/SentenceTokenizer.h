#ifndef _SENTENCETOKENIZER_H_
#define _SENTENCETOKENIZER_H_

#include <vector>
#include <string>


namespace String_utilities {
class SentenceTokenizer {
  protected:
    std::vector<std::string> sentences;
  public:
    explicit SentenceTokenizer(const std::string& input);
    const std::vector<std::string>& getSentences() const;
};
}
#endif //_SENTENCETOKENIZER_H_
