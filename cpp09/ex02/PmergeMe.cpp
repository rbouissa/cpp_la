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
void Pmerge:: use_recursion(size_t index)
{
    if(index >= sort.size())
        return ;
    for(size_t i =0 ;i<sort.size();i++)
    {
        //std::cout<<"sddsddsds\n";
        if(sort[i] > sort[index])
        {
            std::swap(sort[index], sort[i]);
        }
    }
    use_recursion(++index);
}

void Pmerge::fill_second_stack()
{
    for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        int a = *it;
        int b = -1;
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
        if(b!=-1)
        {
             //std::cout<<"a-------->"<<a<<std::endl;
            tmpVector.push_back(b);
        }
        //std::cout<<"b-------->"<<b<<std::endl;
        if(a!=-1)
        {
            
            sort.push_back(a);
        }

    }
     for (std::vector<int>::iterator it = sort.begin(); it != sort.end(); ++it) {
        std::cout<<"=====>max_pair_befor_sorting     :::"<<*it<<std::endl;
     }
     //std::cout<<"=====>max_pair_befor_sorting     :::"<<*sort.end()<<std::endl;
    use_recursion(0);
    for (std::vector<int>::iterator it = sort.begin(); it != sort.end(); ++it) {
        std::cout<<"=====>max_pair_after_sorting            ::"<<*it<<std::endl;
     }
    std::vector<int>::iterator it;
    std::vector<int>::iterator tmp_it;
    for (std::vector<int>::iterator tmp_it = tmpVector.begin(); tmp_it != tmpVector.end(); ++tmp_it){
        it=std::lower_bound(sort.begin(),sort.end(),*tmp_it);
        sort.insert(it,*tmp_it);
        //std::cout<<"it---->"<<*tmp_it<<std::endl;
    }
    //  for (std::vector<int>::iterator it = tmpVector.begin(); it != tmpVector.end(); ++it) {
    //     std::cout<<"=====>min_pair"<<*it<<std::endl;
    //  }
     for (std::vector<int>::iterator it = sort.begin(); it != sort.end(); ++it) {
        std::cout<<"=====>finale_sort    ::"<<*it<<std::endl;
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