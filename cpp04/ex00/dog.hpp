#ifndef DOG_H
#define DOG_H
#include "animal.hpp"

class Dog : public Animal{
    public:
    Dog();
   Dog& operator=(const Dog& o);
   ~Dog();
    void makeSound()const;
};

#endif