#include"wrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
    std::cout<<"WrongCat Constructor Called"<<std::endl;
}
void WrongCat :: makeSound()  const
{
    std::cout<<"WrongCat sound "<<std::endl;
}

WrongCat::~WrongCat()
{
    std::cout<<"WrongCat Deconstructor Called"<<std::endl;
}