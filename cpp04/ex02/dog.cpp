#include"dog.hpp"

Dog::Dog():Animal()
{
    brain = new Brain();
    std::cout<<"Dog Constructor Called"<<std::endl;
}

void Dog :: makeSound() const 
{
    std::cout<<"how how how"<<std::endl;
}

Dog::Dog(Dog &o):Animal(o)
{
    *this = o;
}

Dog::~Dog()
{
    delete brain;
    std::cout<<"Dog Deconstructor Called"<<std::endl;
}

Dog &Dog :: operator=(const Dog& o)
 {
    if(this != &o)
    {
        type=o.type;
    }
    return *this;
 }
