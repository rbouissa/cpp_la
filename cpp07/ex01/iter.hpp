#ifndef ITER_HPP
#define ITER_HPP
#include<iostream>
#include<cstdlib>
class Bureaucrat{
   private:
    std::string name;
    public :
   // Bureaucrat();
    Bureaucrat()
    {
       
    }
    void set_name(std::string nam)
    {
        name = nam;
    }
    std::string getName() const 
{
    return name;
}
  // ~Bureaucrat();
};
std::  ostream &operator<<(std::ostream &o, Bureaucrat const &h)
{
    o << h.getName() << std::endl;
    return (o);
}
template<typename T,typename Func>
void Iter(T *t,size_t length,Func Fun)
{
    if(t == NULL || Fun == NULL)
        return;
    size_t i = 0;
    while(i < length)
    {
         Fun(t[i]);
         i++;
    }
}
template<typename T>
void show_our_data(T &t)
{
    std::cout<<"-----data----"<<t<<std::endl;
}
template<typename T>

void show(T &t)
{
    (void)t;
     std::cout<<"-----data----"<<t<<std::endl;
}

#endif