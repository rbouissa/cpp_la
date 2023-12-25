#ifndef BASE_H
#define BASE_H
# include <iomanip>
# include <iostream>
# include <string>
#include<cmath>
#include<stdint.h>
template<typename T>
void swap(T& a,T& b)
{
    T tmp= a;
    a = b ;
    b = tmp;
}
template<typename T>
T min(T& a,T& b)
{
   if(a>b)
    return b;
    else if(a<b)
        return a;
    else 
        return b;
}

template<typename T>

T max(T& a,T& b)
{
    if(a>b)
    return a;
    else if(a<b)
        return b;
    else 
        return b;
   
}
#endif