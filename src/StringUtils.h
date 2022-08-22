#ifndef _STRINGUTILS_H_
#define _STRINGUTILS_H_
#include <string>


namespace String_utilities {

std::string toLower(const std::string& input);
std::string removeWhitespace(const std::string& input);
void removeWhitespaceEnd(std::string& input);
void removeWhitespaceFront(std::string& input);
bool isPunct(char c);
void removePunctInEnd(std::string& input);
void removePunctInFront(std::string& input);
std::string removePunct(const std::string& input);
} // String_utilities

#endif //_STRINGUTILS_H_
