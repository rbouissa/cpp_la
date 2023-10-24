#include"wrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
    std::cout<<"WrongCat Constructor Called"<<std::endl;
}
void WrongCat :: makeSound()  const
{
    std::cout<<"WrongCatsound "<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat Deconstructor Called"<<std::endl;
}