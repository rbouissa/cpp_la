 #include "Zombie.hpp"
Zombie::Zombie()
{

}


Zombie::Zombie(std::string Name)
{
    std::cout<<"Constructor called"<<std::endl;
    name = Name;
}
Zombie::~Zombie()
{
    std::cout<<"Deconstructor destruct Zombie "<<name<<std::endl;
}
void Zombie :: announce()
{
    std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
void Zombie::setName(std::string n)
{
    name = n;
}

Zombie* newZombie( std::string name )
{
    return (new Zombie(name));
}