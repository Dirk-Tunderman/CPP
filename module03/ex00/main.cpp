#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("CT-Soldier");


    claptrap1.attack("lil clappy");

    claptrap1.takeDamage(5);
    claptrap1.takeDamage(5);
    claptrap1.takeDamage(5);
    claptrap1.takeDamage(5);

    claptrap1.beRepaired(4);
    claptrap2.beRepaired(100);
    claptrap2  = claptrap1;


    return 0;
}