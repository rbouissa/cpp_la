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

void Pmerge::ParsPmerge(char **av)
{
    int i=1;
    int j=0;
    while(av[i]){
        while(av[i][j])
        {
            if(!isdigit(av[i][j]))
                throw(InvalidIndex());
            j++;
        }
        j=0;
        i++;
    }
}

void Pmerge::fill_second_stack()
{
    std::vector<int> tmpVector;
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        int a=*it;
        int b=-1;
        if(it+1!= myVector.end())
        {
            it++;
            b=*(it);
        }
        Mystruct str;
        if(a>=b)
        {
            str.max=a;
            str.min=b;
        }
        else
        {
            str.max=b;
            str.min=a;
        }
        tmpVector.push_back(str.max);
    }
     for (std::vector<int>::iterator it = tmpVector.begin(); it != tmpVector.end(); ++it) {
        std::cout<<"=====>"<<*it<<std::endl;
     }
   // myVector.clear();
}

void Pmerge::fill_stack(char** av)
{
    int i=1;
    while(av[i])
    {
        myVector.push_back(atoi(av[i]));
        i++;
    }
}


const char *	Pmerge::InvalidIndex::what() const throw()
{
    return "Error: Invalid Index";
}