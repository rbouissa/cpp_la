#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "Brain.hpp"

void fun()
{
   Cat one;
   Cat two;

    one = two;
}

int main()
{

  fun();
  system("leaks Animal");














//     const Animal* j = new Dog();
// const Animal* i = new Cat();
// delete j;//should not create a leak
// delete i;
// const Animal * animals[4]={new Dog(),new Cat(),new Dog(),new Cat()};
// animals[2]->makeSound();
// animals[3]->makeSound();
// for(int l=0 ; l <4;l++){
//     delete animals[l];
// }
















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