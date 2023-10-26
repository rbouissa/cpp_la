#include "Animal.hpp"
#include"Brain.hpp"

Brain::~Brain()
{
    std::cout<<"Brain Deconstructor Called"<<std::endl;
}

Brain::Brain()
{
    std::cout<<"Brain Constructor Called"<<std::endl;
}

Brain::Brain(Brain &o)
{
    *this = o;
}

Brain &Brain :: operator=(const Brain& o)
 {
    if(this != &o)
    {
        int i;
        i=0;
        while(i<100)
        {
            ideas[i]=o.ideas[i];
            i++;
        }
    }
    return *this;
 }
