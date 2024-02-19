#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " makes a sound: ";
    j->makeSound();

    std::cout << i->getType() << " makes a sound: ";
    i->makeSound();
    
    std::cout << "meta makes a sound: ";
    meta->makeSound(); // Should not print anything specific since Animal is abstract
    
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << " makes a sound: ";
    wrongCat->makeSound(); // Demonstrates wrong behavior
    
    delete wrongMeta;
    delete wrongCat;

    return 0;
}