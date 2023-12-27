#include "Utils.h"
#include <string.h>

std::vector<std::string> hotel_klasowy::Utils::split(std::string s, std::string del)
{
    std::vector<std::string> found;
    char* cs = (char*) s.c_str();
    const char* d = del.c_str();
    int begin = 0;
    for (int i = 0; i < s.length() - del.length(); i++) {
        if (std::strncmp(cs + i, d, del.length()) == 0) {
            cs[i] = '\0';
            std::string ns(cs + begin);
            found.push_back(ns);
            begin = i + del.length();
        }
    }
    std::string rest(cs + begin);
    found.push_back(rest);
    return found;
}
