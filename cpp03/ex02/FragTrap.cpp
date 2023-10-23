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

FragTrap &FragTrap :: operator=(const FragTrap& o)
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
void FragTrap :: highFivesGuys(void)
{
    std::cout<<" Positive High Fives Request"<<std::endl;
}