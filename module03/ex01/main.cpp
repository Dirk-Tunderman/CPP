#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ScavTrap scavtrap1("Savyy");
    ClapTrap claptrap1("Clappert");
    
    ScavTrap scavtrap2;

    // ClapTrap attacks ScavTrap
    claptrap1.attack("ScavTrap Uno");
    scavtrap1.takeDamage(10);



    // Repair both ClapTrap and ScavTrap
    claptrap1.beRepaired(4);
    scavtrap1.beRepaired(10);

    // ScavTrap enters Gate keeper mode
    scavtrap1.guardGate();

    return 0;
}