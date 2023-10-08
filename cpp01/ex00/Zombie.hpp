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
    void announce(void);
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif
