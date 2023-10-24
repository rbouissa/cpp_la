#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H
# include <iomanip>
# include <iostream>
# include <string>
class WrongAnimal{
   protected:
    std::string type;
    public :
    WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(WrongAnimal &o);
    WrongAnimal& operator=(const WrongAnimal& o);
    ~WrongAnimal();
    void makeSound() const ;
    std::string getType()const ;
};

#endif