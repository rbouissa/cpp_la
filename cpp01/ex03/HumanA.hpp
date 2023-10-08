
#ifndef HUMANA
#define HUMANA
# include <iostream>
#include<string.h>
#include"Weapon.hpp"

class HumanA{
    private:
     Weapon &w;
     std::string name;
    public:
    HumanA(std::string nam,Weapon& a);
    void attack();
    ~HumanA();
};
#endif