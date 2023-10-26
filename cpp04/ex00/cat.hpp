#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal{
    public:
    int i;
    Cat();
   Cat& operator=(const Cat& o);
   ~Cat();
    void makeSound() const ;
};

#endif