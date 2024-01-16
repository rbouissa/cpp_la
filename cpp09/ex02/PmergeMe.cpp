#include"PmergeMe.hpp"

Pmerge::Pmerge()
{

}

Pmerge::~Pmerge()
{

}

Pmerge::Pmerge(const Pmerge &o)
{
    *this = o;
}

Pmerge &Pmerge::operator=(const Pmerge &o)
{
    if (this != &o)
    {
        myVector = o.myVector;
    }
    return *this;
}

void Pmerge::ParsPmerge(std::string av)
{
    int i=0;
    while(av[i]&&(av[i]=='\t'||av[i]==' '))
        i++;
    if(!av[i])
        throw InvalidIndex();
    while(av[i]&&(isdigit(av[i])||av[i]==' '||av[i]=='\t'))
        i++;
    if(av[i])
        throw InvalidIndex();
}

const char *	Pmerge::InvalidIndex::what() const throw()
{
    return "Error: Invalid Index";
}