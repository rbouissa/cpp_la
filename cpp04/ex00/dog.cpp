#include"dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog Constructor Called"<<std::endl;
}

void Dog :: makeSound() const 
{
    std::cout<<"how how how"<<std::endl;
}

Dog::~Dog()
{
    std::cout<<"Dog Deconstructor Called"<<std::endl;
}