#ifndef ANIMAL_H
#define ANIMAL_H
# include <iomanip>
# include <iostream>
# include <string>
class Animal{
   protected:
    std::string type;
    public :
    Animal();
    Animal(std::string name);
    Animal(Animal &o);
    Animal& operator=(const Animal& o);
    virtual ~Animal();
    virtual void makeSound() const ;
      std::string getType()const ;
};

#endif
