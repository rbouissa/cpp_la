#ifndef WRONGCAT_H
#define WRONGCAT_H
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    public:
    WrongCat();
   WrongCat& operator=(const WrongCat& o);
   ~WrongCat();
    void makeSound() const ;
};

#endif
