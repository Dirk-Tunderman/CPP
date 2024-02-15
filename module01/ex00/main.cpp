#include "Zombie.hpp"



int main()
{
    // Stack Zombie
    randomChump("Foo stack");


    // Heap Zombie
    Zombie *heapZombie = newZombie("Foo heap");
    heapZombie->announce();
    delete heapZombie;

    return 0;
}
