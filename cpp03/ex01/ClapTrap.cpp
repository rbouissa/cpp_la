#include"ClapTrap.hpp"

ClapTrap::~ClapTrap()
{
    std::cout<<"Deconstructor Called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout<<"Constructor Called"<<std::endl;
    Name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

void ClapTrap :: attack(const std::string& target)
{
    if(HitPoints<=0)
        std::cout<<Name<<" has died"<<std::endl;
    else if(EnergyPoints<=0)
        std::cout<<Name<<" has no enough energy"<<std::endl;
    else{
  
    std::cout<<"ClapTrap "<<Name<<" attacks "<<target<<" ,causing "<<AttackDamage<<std::endl;
       EnergyPoints = EnergyPoints -1;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(HitPoints<=0)
        std::cout<<Name<<" has died"<<std::endl;
    else
    {
    std::cout<<"ClapTrap "<<Name<<" takeDamage : "<<amount<<std::endl;
    
    HitPoints=HitPoints-amount;
    if (HitPoints < 0)
        HitPoints = 0;
    }

 }

void ClapTrap::beRepaired(unsigned int amount)
{
    if(HitPoints<=0)
        std::cout<<Name<<" has died"<<std::endl;
    else if(EnergyPoints<=0)
        std::cout<<Name<<" has no enough energy"<<std::endl;
    else {
        std::cout<<"ClapTrap "<<Name<<" beRepaired :"<<amount<<std::endl;
        HitPoints += amount;
        EnergyPoints = EnergyPoints -1;
    }

}
 int ClapTrap ::  getHitPoints()
    {
        return HitPoints;
    }
ClapTrap::ClapTrap(ClapTrap &t)
{
    *this = t;
}

ClapTrap &ClapTrap :: operator=(const ClapTrap& o)
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