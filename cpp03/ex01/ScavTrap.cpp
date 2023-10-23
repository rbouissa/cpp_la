
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

void ScavTrap :: attack(const std::string& target)
{
    if(HitPoints<=0)
        std::cout<<Name<<" has died"<<std::endl;
    else if(EnergyPoints<=0)
        std::cout<<Name<<" has no enough energy"<<std::endl;
    else{
  
    std::cout<<"ScavTrap  "<<Name<<" attacks "<<target<<" ,causing "<<AttackDamage<<std::endl;
       EnergyPoints = EnergyPoints -1;
    }
}

void ScavTrap::guardGate()
{
    std::cout<<"ScavTrap " <<"is now in Gate keeper mode" << std::endl;
}
ScavTrap::~ScavTrap()
{
    std::cout<<"ScavTrap Deconstructor Called "<<std::endl;
}


ScavTrap &ScavTrap :: operator=(const ScavTrap& o)
 {
    if(this != &o)
    {
         Name=o.Name;
         HitPoints=o.HitPoints;
         EnergyPoints=o.EnergyPoints;
         AttackDamage=o.AttackDamage;
    }
    return *this;
 }