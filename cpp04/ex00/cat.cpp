#include"Cat.hpp"
Cat::Cat()
{
  this->type = "cat";
std::cout<< this->type <<" Constructor Called"<<std::endl;
}
void Cat :: makeSound()  const
{
    std::cout<<"meow meow meow "<<std::endl;
}

Cat::~Cat()
{
    std::cout<<"Cat Deconstructor Called"<<std::endl;
}