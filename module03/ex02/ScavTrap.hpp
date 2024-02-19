#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap();  // Default constructor
    ScavTrap(std::string name);  // Parameterized constructor
    ScavTrap(const ScavTrap& other);  // Copy constructor
    ~ScavTrap();  // Destructor

    ScavTrap& operator=(const ScavTrap& other);  // Copy assignment operator

    void attack(const std::string& target);  // Overridden attack function
    void guardGate();  // Special capacity for ScavTrap
};

#endif // SCAVTRAP_HPP