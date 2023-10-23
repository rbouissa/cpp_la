#ifndef DOG_H
#define DOG_H
#include "animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
    Brain *brain;
    public:
    Dog();
    Dog(Dog &o);
    Dog& operator=(const Dog& o);
   ~Dog();
    void makeSound()const;
};

#endif