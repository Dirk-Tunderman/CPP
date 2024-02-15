#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        horde[i].setName(name);
    }
    int i = 7;
    horde[i].setName(name + "hai");
    return (horde);
}