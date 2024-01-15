#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>
#include <cstdlib>
template <typename T>
class Array{
    private:
        T *t;
        unsigned int length;
    public:
     class InvalidIndex: public std::exception {
        public:
            virtual const char* what() const throw() {return("cannot access to this index!");}
    };
        Array(){
            t = new T();
            length = 0;
        };
        Array(unsigned int n){
            t = new T[n];
            length = n;
        };
        Array(const Array& o){
            length = o.length;
            t = new T[o.length];
        for (unsigned int i=0; i < length; i++)
            t[i] = o.t[i];
        };
        Array& operator=(const Array& o){
            if (this != &o){
                delete []t;
                length = o.length;
                t = new T[length];
                for (unsigned int i = 0; i < length; i++)
                    t[i] = o.t[i];
            }
            return(*this);
        }
        T& operator[](unsigned int i) const{
        if (i >= length)
            throw InvalidIndex();
        return t[i];
    }
    unsigned int size()const{ 
        return(length);
        }
    ~Array(){ 
        delete []t;
    }
   

};

#endif