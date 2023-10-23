#ifndef CAT_H
#define CAT_H
#include "animal.hpp"
#include"Brain.hpp"
class Cat : public Animal{
    private:
    Brain *brain;
    public:
    Cat();
   Cat(Cat &o);
   Cat& operator=(const Cat& o);
   ~Cat();
    void makeSound() const ;
};

#endif