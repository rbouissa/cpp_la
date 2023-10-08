
#ifndef WEAPON_H
#define WEAPON_H
#include<string.h>
# include <iostream>


class Weapon
{
private:
    std::string type;
public:
Weapon();
Weapon(std::string typ);
const std::string&  getType() const;
void setType(std::string k);
~Weapon();
};
#endif


