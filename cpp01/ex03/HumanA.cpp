#include"HumanA.hpp"
HumanA::HumanA(std::string nam,Weapon& a) : w(a)
{
     name = nam;
};
void HumanA :: attack()
{
     std::cout<< name << " attacks with their : " << w.getType() << std::endl ;
}
HumanA::~HumanA()
{
        
}