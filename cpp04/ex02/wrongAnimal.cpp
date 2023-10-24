#include"wrongAnimal.hpp"
WrongAnimal::~WrongAnimal()
{
    std::cout<<"WrongAnimal Deconstructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal()
{
    std::cout<<"WrongAnimal Constructor Called"<<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal &o)
{
    *this = o;
}

WrongAnimal &WrongAnimal :: operator=(const WrongAnimal& o)
 {
    if(this != &o)
    {
        type=o.type;
    }
    return *this;
 }

 
 std::string WrongAnimal :: getType() const
{
    return type;
}

 void WrongAnimal :: makeSound() const 
{
    std::cout<<"WrongAnimal sound "<<std::endl;
}