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
        ClapTrap();
        ClapTrap(std::string name); 
        ClapTrap(const ClapTrap& other);
         ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& other);

        virtual void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif