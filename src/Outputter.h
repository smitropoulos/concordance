#ifndef _OUTPUTTER_H_
#define _OUTPUTTER_H_
#include <map>
#include "WordDetails.h"


namespace IO {

class Outputter {
  public:
    static void print(const std::map<std::string, WordDetails>& wordMap, size_t maxWordSize);
};
} // IO

#endif //_OUTPUTTER_H_
