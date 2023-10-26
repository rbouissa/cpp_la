#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{

  // fun();
  // system("leaks Animal");














// Cat a;
// {
//   Cat b = a;
// }
    const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
const Animal * animals[6]={new Dog(),new Cat(),new Dog(),new Cat(),new Dog(),new Cat()};
animals[2]->makeSound();
animals[3]->makeSound();
for(int l=0 ; l <6;l++){
    delete animals[l];
}
















    // Animal *k = new Cat();
    // std::cout << "(Dog) : " << k->getType() << std::endl;
    // while (e < 5)
    // {
    //     k[e] = Dog() ;
    //     k[e].makeSound();
    //     e++;
    // }

    // while (e < 10)
    // {
    //     k[e] = Cat();
    //     e++;
    // }

    // k[1].makeSound();
    // // Cat a;
    // // {
    // //     std::cout << "reda" << std::endl;
    // //     Cat b = a;
    // // }
  //system("leaks Animal");
    return 0;
}