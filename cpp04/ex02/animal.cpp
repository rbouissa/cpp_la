#include"Animal.hpp"
#include"Cat.hpp"
#include"Dog.hpp"
Animal::~Animal()
{
    std::cout<<"Animal Deconstructor Called"<<std::endl;
}

Animal::Animal()
{
    std::cout<<"Animal Constructor Called"<<std::endl;
}

Animal::Animal(Animal &o)
{
    *this = o;
}

Animal &Animal :: operator=(const Animal& o)
 {
    if(this != &o)
    {
        type=o.type;
    }
    return *this;
 }

 
 std::string Animal :: getType() const
{
    return type;
}

//  void Animal :: makeSound() const 
// {
//     std::cout<<"Animal sound "<<std::endl;
// }


