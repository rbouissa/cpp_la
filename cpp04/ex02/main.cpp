#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "Brain.hpp"

int main()
{
  //  int e = 0;
    // Animal k[10];

    // while (e < 5)
    // {
    //     k[e] = Dog();
    //     e++;
    // }

    // while (e < 10)
    // {
    //     k[e] = Cat();
    //     e++;
    // }

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->makeSound();
    delete j; // should not create a memory leak
    delete i;

    return 0;
}