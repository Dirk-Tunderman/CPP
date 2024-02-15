#include "replace.hpp"


int main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    Replace replace(argv[1], argv[2], argv[3]);
    replace.performReplacement();
    return (0);

}