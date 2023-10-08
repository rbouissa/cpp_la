#ifndef ZOMBIE_H
#define ZOMBIE_H
#include <string.h>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
    Zombie(std::string n);
    Zombie();
    ~Zombie();
    void setName(std::string n);
   void announce( void );
};
Zombie* zombieHorde( int N, std::string name );
void randomChump( std::string name );
Zombie* newZombie( std::string name );
#endif