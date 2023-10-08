#include"ClapTrap.hpp"
int main()
{
    ClapTrap C("fred");
    
        C.attack("Heart");
         C.takeDamage(3);
         C.beRepaired(4);
         if(C.getHitPoints() < 0)
         {
            std::cout<<"djdkjkd"<<std::endl;
         }
}