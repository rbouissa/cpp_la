#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->makeSound();
    delete j; // should not create a memory leak
    delete i;

    return 0;
}