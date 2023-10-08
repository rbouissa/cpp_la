#include"FragTrap.hpp"

FragTrap::FragTrap(FragTrap &t):ClapTrap(t)
{
    *this = t;
}
FragTrap::FragTrap(std::string name):ClapTrap(name)
{
    std::cout<<"FragTrap constructor Called"<<std::endl;
    Name =name;
    HitPoints=100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout<<"FragTrap Deconstructor Called"<<std::endl;
}

void ClapTrap :: attack(const std::string& target)
{
     EnergyPoints = EnergyPoints -1;
    std::cout<<"FragTrap "<<Name<<" attacks "<<target<<" ,causing"<<AttackDamage<<std::endl;
}

void FragTrap :: highFivesGuys(void)
{
    std::cout<<" Positive High Fives Request"<<std::endl;
}