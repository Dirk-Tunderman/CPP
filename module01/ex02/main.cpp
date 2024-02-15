#include <iostream>
#include <string>



int main() {
    std::string name = "HI THIS IS BRAIN";
    std::string* ptr = &name;
    std::string& ref = name;
    

    std::cout << "Memory address string: " << &name << std::endl;

    std::cout << "Memory address pointer: " << ptr << std::endl;

    std::cout << "Memory address reference: " << &ref << std::endl;


    std::cout << "String: " << name << std::endl;
    std::cout << "Pointer: " << *ptr << std::endl;
    std::cout << "Reference: " << ref << std::endl;

    return 0;
}