#include "replace.hpp"



Replace::Replace(const char* file, const char* s1, const char* s2)
{
    this->inputFile.open(file);
    if (!this->inputFile.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        exit(1);
    }
    this->outputFile.open(std::string(file) + ".replace");
    if (!this->outputFile.is_open())
    {
        std::cout << "Error: could not open file" << std::endl;
        exit(1);
    }
    this->s1 = s1;
    this->s2 = s2;
}

Replace::~Replace()
{
    this->inputFile.close();
    this->outputFile.close();
}

void Replace::performReplacement()
{
    std::string line;
    while (std::getline(this->inputFile, line))
    {
        std::string::size_type pos = 0;
        while ((pos = line.find(this->s1, pos)) != std::string::npos)
        {
            line.replace(pos, this->s1.length(), this->s2);
            pos += this->s2.length();
        }
        this->outputFile << line << std::endl;
    }
}