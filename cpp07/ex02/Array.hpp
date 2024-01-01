#ifndef ARRAY_H
#define ARRAY_H
# include <iomanip>
# include <iostream>
# include <string>
#include<cmath>
#include<stdint.h>
template<typename T,size_t Size, typename Func>

class Array{
    private:
         T *t;
        unsigned int l;
    public:
    Array();
    Array(unsigned int n){
          t = new T[n];
            l = n;
    }
    Array(const Array& o)
    {
          t = new T[l];
            l = o.l;
        for (unsigned int i=0; i < l; i++)
            t[i] = o.t[i];
    }
    Array& operator=(const Array& o){
          if (this != &o){
                delete []t;
                t = new T[l];
                l = o.l;
                for (unsigned int i = 0; i < l; i++)
                    t[i] = o.t[i];
    }
       ~Array(){ 
        delete []t;
    }
       unsigned int size()const{ 
        return(l);
        }
}
};

#endif