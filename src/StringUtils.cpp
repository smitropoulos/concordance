#include "StringUtils.h"


namespace String_utilities {

std::string toLower(const std::string& input) {

    std::string ret;

    for ( const char& ch: input )
    {
        ret.push_back(tolower(ch));
    }

    return ret;
}


void removePunctInEnd(std::string& input) {

    int pos{0};
    for ( int i = input.length() - 1; i > 0; i-- )
    {
        if ( isPunct(input[i]))
        {
            pos++;
        }
        else
        {
            break;
        }
    }
    if ( pos )
    {
        input.resize(input.length() - pos);
    }
}

void removePunctInFront(std::string& input) {

    int pos{0};
    for ( char i: input )
    {
        if ( isPunct(i))
        {
            pos++;
        }
        else
        {
            break;
        }
    }
    if ( pos )
    {
        input = input.substr(pos, input.length());
    }
}

bool isPunct(char c) {

    if ( c == '.' ) // exception for abbreviations
    {
        return false;
    }
    return ispunct(c);
}

std::string removePunct(const std::string& input) {

    std::string ret = input;
    removePunctInFront(ret);
    removePunctInEnd(ret);
    return ret;
}

void removeWhitespaceEnd(std::string& input) {

    int pos{0};
    for ( int i = input.length() - 1; i > 0; i-- )
    {
        if ( isspace(input[i]))
        {
            pos++;
        }
        else
        {
            break;
        }
    }
    if ( pos )
    {
        input.resize(input.length() - pos);
    }
}

void removeWhitespaceFront(std::string& input) {

    int pos{0};
    for ( char i: input )
    {
        if ( isspace(i))
        {
            pos++;
        }
        else
        {
            break;
        }
    }
    if ( pos )
    {
        input = input.substr(pos, input.length());
    }
}

std::string removeWhitespace(const std::string& input) {

    auto ret = input;
    removeWhitespaceFront(ret);
    removeWhitespaceEnd(ret);
    return ret;
}
} // String_utilities