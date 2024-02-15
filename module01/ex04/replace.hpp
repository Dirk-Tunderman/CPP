#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>

class Replace {
private:
    std::ifstream inputFile;
    std::ofstream outputFile;
    std::string s1;
    std::string s2;

public:
    Replace(const char* file, const char* s1, const char* s2);
    ~Replace();
    void performReplacement();
};

#endif