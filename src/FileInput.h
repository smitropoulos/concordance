#ifndef _FILEINPUT_H_
#define _FILEINPUT_H_

#include <string_view>


namespace IO {

class FileInput {
  public:
    std::string read(const std::string_view& input);
};
} // IO

#endif //_FILEINPUT_H_
