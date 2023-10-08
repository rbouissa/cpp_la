#include"ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
    std::cout<<"ClapTrap Deconstructor Called"<<std::endl;

}
ClapTrap::ClapTrap(ClapTrap &t)
{
    *this = t;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"ClapTrap Constructor Called"<<std::endl;
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

void ClapTrap :: attack(const std::string& target)
{
     EnergyPoints = EnergyPoints -1;
    std::cout<<"ClapTrap "<<Name<<" attacks "<<target<<" ,causing"<<AttackDamage<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout<<"ClapTrap "<<Name<<" takeDamage : "<<amount<<std::endl;
    HitPoints=HitPoints-amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout<<"ClapTrap "<<Name<<" beRepaired : "<<amount<<std::endl;
    HitPoints = amount;
    EnergyPoints = EnergyPoints -1;
}