
#include"Zombie.hpp"

int main()
{
    Zombie *z = newZombie("dd");
    z->announce();
    randomChump("Foo");
    delete z;
}