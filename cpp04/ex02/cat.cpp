#include"cat.hpp"
#include"Brain.hpp"

Cat::Cat():Animal()
{
    brain = new Brain();
    std::cout<<"Cat Constructor Called"<<std::endl;
}

void Cat :: makeSound()  const
{
    std::cout<<"meow meow meow "<<std::endl;
}

Cat::Cat(Cat &o):Animal(o)
{
    *this = o;
}

Cat::~Cat()
{
    delete brain;
    std::cout<<"Cat Deconstructor Called"<<std::endl;
}

Cat &Cat:: operator=(const Cat& o)
 {
    if(this != &o)
    {
        type=o.type;
    }
    return *this;
 }


