#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    // Fill half with Dogs, half with Cats
    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    // Demonstrate polymorphism
    for (int i = 0; i < numAnimals; ++i) {
        std::cout << animals[i]->getType() << " makes a sound: ";
        animals[i]->makeSound();
    }

    // Clean up
    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }

    // Test deep copy
    Dog originalDog;
    Dog copyDog(originalDog);
    // Modify copyDog's brain or ideas here to test deep copy

    return 0;
}
