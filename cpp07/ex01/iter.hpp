#ifndef ITER_HPP
#define ITER_HPP
#include<iostream>
#include<cstdlib>
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
#endif