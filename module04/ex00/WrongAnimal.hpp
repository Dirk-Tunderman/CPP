#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const std::string& type);
    ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;
};

#endif // WRONGANIMAL_HPP
