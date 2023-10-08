#include "ScavTrap.hpp"

ScavTrap::ScavTrap(ScavTrap &t):ClapTrap(t)
{
    *this = t;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout<<"Constructor of ScavTrap Called"<<std::endl;
    Name=name;
   HitPoints=100;
    EnergyPoints=50;
    AttackDamage=20;
}

void ScavTrap::attack(const std::string& target)
{
    EnergyPoints = EnergyPoints -1;
    std::cout<<"ScavTrap "<<Name<<"attacks "<<target<<",causing"<<AttackDamage<<std::endl;

}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap " <<"is now in Gate keeper mode";
}

ScavTrap :: ~ScavTrap()
{
    std::cout<<"Deconstructor Of ScavTrap called"<<std::endl;
}