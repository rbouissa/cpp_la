#ifndef SCAVTRAP_H
#define SCAVTRAP_H
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
    ScavTrap(ScavTrap &t);
   ScavTrap& operator=(const ScavTrap& o);
   ScavTrap(std::string name);
   ~ScavTrap();
   void attack(const std::string& target); 
   void guardGate();
};

#endif