#include"Harl.hpp"

void Harl :: complain(std::string level)
{

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
        while(i<4)
        {
            switch ((i))
            {
            case 0:
                debug();
                break;
            case 1:
                info();
                break;
            case 2:
                warning();
                break;
            case 3:
                error();
                break;
            
            default:
                break;
            }
            i++;
        }
    }
    i++;
   }
}
void Harl::debug( void )
{
    std::cout<<"[ DEBUG ]"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
}
void Harl :: info( void )
{
    std::cout<<"[ INFO ]"<<std::endl;
    std::cout<<"I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!"<<std::endl;
}
void Harl :: warning( void )
{
    std::cout<<"[ WARNING ]"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free. I ve been coming for years whereas you started working here since last month"<<std::endl;
}
void Harl :: error( void )
{
    std::cout<<"[ ERROR ]"<<std::endl;
    std::cout<<"This is unacceptable! I want to speak to the manager now."<<std::endl;
}