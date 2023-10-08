#include  "HumanB.hpp"
HumanB::HumanB(std::string nam)
{
        w=NULL;
        name = nam;
}
void HumanB::attack()
{
	if (w == NULL)
	{
		std::cout << name << " has no weapon to attack his ennemy!" << std::endl;
	}
	else
		std::cout << name << " attacks with their " << w->getType() << std::endl;
}
void HumanB ::setWeapon(Weapon& a)
{
    w=&a;
}
HumanB::~HumanB()
{
  
}