#ifndef CAT_H
#define CAT_H
#include "animal.hpp"

class Cat : public Animal{
    public:
    Cat();
   Cat& operator=(const Cat& o);
   ~Cat();
    void makeSound() const ;
};

#endif