#ifndef FRAGTRAP_H
#define FRAGTRAP_H
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
    FragTrap();
     FragTrap(FragTrap &t);
   FragTrap& operator=(const FragTrap& o);
   FragTrap(std::string name);
   ~FragTrap();
   void highFivesGuys(void);
};

#endif