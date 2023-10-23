#include"cat.hpp"
Cat::Cat()
{
    std::cout<<"Cat Constructor Called"<<std::endl;
}
void Cat :: makeSound()  const
{
    std::cout<<"meow meow meow "<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Cat Deconstructor Called"<<std::endl;
}