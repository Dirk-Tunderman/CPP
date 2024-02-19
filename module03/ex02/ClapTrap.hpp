#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap();  // Default constructor
    ClapTrap(std::string name);  // Parameterized constructor
    ClapTrap(const ClapTrap& other);  // Copy constructor
    ~ClapTrap();  // Destructor

    ClapTrap& operator=(const ClapTrap& other);  // Copy assignment operator

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif // CLAPTRAP_HPP