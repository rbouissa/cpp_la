
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
    std::cout<<"Constructor of ScavTrap Called"<<std::endl;
    Name=name;
   HitPoints=100;
    EnergyPoints=50;
    AttackDamage=20;
}
ScavTrap::ScavTrap(ScavTrap &t):ClapTrap(t)
{
    *this = t;
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
ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Deconstructor Called "<<std::endl;
}