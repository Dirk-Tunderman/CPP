#include "Zombie.hpp"



void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}


Zombie::~Zombie() {
    std::cout << name << ": is destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}