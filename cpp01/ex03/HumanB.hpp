#ifndef HUMANB
#define HUMANB
# include <iostream>
#include<string.h>
#include"Weapon.hpp"

class HumanB{
    private:
     Weapon *w;
     
      std::string name;
    public:
    HumanB();
    void setWeapon(Weapon& a);
    HumanB(std::string nam);
    ~HumanB();
    void attack();
};
#endif