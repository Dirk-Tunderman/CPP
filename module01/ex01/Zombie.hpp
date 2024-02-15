#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name;
    
    public:
        Zombie() : name("Unnamed") {} // Default constructor
        Zombie(std::string name) : name(name) {} // Existing constructor
        void announce(void);
        void setName(std::string name);
        ~Zombie();


};

    Zombie* zombieHorde( int N, std::string name );

#endif