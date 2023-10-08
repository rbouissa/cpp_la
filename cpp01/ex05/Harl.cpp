#include"Harl.hpp"

void Harl :: complain(std::string level)
{
    void(Harl::*lv[4])();
   lv[0] = &Harl::debug;
   lv[1] = &Harl::info;
   lv[2] = &Harl::warning;
   lv[3] = &Harl::error;
   std::string nv[4];
   nv[0]= "DEBUG";
   nv[1]= "INFO";
   nv[2]="WARNING";
   nv[3]="ERROR";
   int i;
   i=0;
   while(i<4)
   {
    if(nv[i]==level)
    {
        (this->*lv[i])();
        break;
    }
    i++;
   }
   if(i==4)
   std::cout<<"Please enter an argument like (DEBUG ,ERROR,INFO,WARNING)"<<std::endl;
}
void Harl::debug( void )
{
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}
void Harl :: info( void )
{
    std::cout<<"I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"<<std::endl;
}
void Harl :: warning( void )
{
    std::cout<<"I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month"<<std::endl;
}
void Harl :: error( void )
{
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}