#include "Abc.hpp"
#include "Base.hpp"
Base * generate()
{
    int random = std::rand()%3;
    if(random == 0)
        return (new A);
    else if(random == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p)
{
    if(dynamic_cast<A*>(p))
        std::cout<<"A"<<std::endl;
    if(dynamic_cast<B*>(p))
        std::cout<<"B"<<std::endl;
    if(dynamic_cast<C*>(p))
        std::cout<<"C"<<std::endl;
    }

void identify(Base& p)
{
     if(dynamic_cast<A&>(p))
        std::cout<<"A"<<std::endl;
    if(dynamic_cast<B&>(p))
        std::cout<<"B"<<std::endl;
    if(dynamic_cast<C&>(p))
        std::cout<<"C"<<std::endl;
}
int main()
{
   
    

}