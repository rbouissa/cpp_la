#include"animal.hpp"
#include"dog.hpp"
#include"cat.hpp"
#include"wrongAnimal.hpp"
#include"wrongCat.hpp"
int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* k = new WrongCat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
k->makeSound();
return 0;
}