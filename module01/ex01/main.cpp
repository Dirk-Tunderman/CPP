#include "Zombie.hpp"



int main() {

    int N = 5;

    Zombie* horde = zombieHorde(N, "Jantje");
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
}
