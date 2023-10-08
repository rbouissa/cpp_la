#include"Zombie.hpp"


int main()
{
    Zombie *z = newZombie("dd");
    Zombie *a = zombieHorde(3,"Foo");
    z->announce();
    int i=0;
    while(i<3)
    {
        a[i].announce();
        i++;
    }
    i=0;
    delete[] a;
    delete z;
}