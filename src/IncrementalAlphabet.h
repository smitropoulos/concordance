#ifndef _INCREMENTALALPHABET_H_
#define _INCREMENTALALPHABET_H_

#include <string>
#include <sstream>


class IncrementalAlphabet {
  private:
    unsigned int times{1};
    char lastChar{'a'};

  public:
    std::string getNext() {

        if ( lastChar == 'z' + 1 )
        {
            lastChar = 'a';
            times++;
        }
        std::stringstream ss;
        for ( int i = 0; i < times; i++ )
        {
            ss << ( char ) (lastChar);
        }
        lastChar++;
        return ss.str();
    }
};

#endif //_INCREMENTALALPHABET_H_
