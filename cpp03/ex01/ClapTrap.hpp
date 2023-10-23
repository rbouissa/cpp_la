#ifndef CLAPTRAP_H
#define CLAPTRAP_H
# include <iomanip>
# include <iostream>
# include <string>
class ClapTrap{
    protected:
        std::string Name;
        unsigned int HitPoints;
        unsigned int EnergyPoints;
        unsigned int AttackDamage;
        
   public:
   ClapTrap();
    ClapTrap(std::string Name);
    ClapTrap(ClapTrap &t);
    ClapTrap& operator=(const ClapTrap& o);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    int  getHitPoints();
};

#endif