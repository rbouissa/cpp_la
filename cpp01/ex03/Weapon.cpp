
#include"Weapon.hpp"
Weapon::Weapon()
{

}
const std::string& Weapon:: getType() const
{
    return (type);
}
void Weapon::setType(std::string k)
{
        type = k;
}
Weapon::Weapon(std::string typ)
{
    type=typ;
};
Weapon::~Weapon()
{
}