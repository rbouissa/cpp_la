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
        myVector_deque = o.myVector_deque;
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

void Pmerge::fill_stack(char** av)
{
    int i=1;
    while(av[i])
    {
        myVector.push_back(atoi(av[i]));
        i++;
    }
     
    std::vector<int>::iterator it;
     std::cout<<"Before: ";
   for (std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void Pmerge::mergeSort(std::vector<std::pair<int, int> >& vec, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort(vec, l, m);
        mergeSort(vec, m + 1, r);
        merge(vec, l, m, r);
    }
}

void Pmerge::fill_second_stack()
{
    std::vector<std::vector<std::pair<int, int> > >bigOne;
    std::vector<int>::iterator it = myVector.begin();
    std::vector<std::pair<int, int > > tmpP; 
    for (; it != myVector.end(); ++it) {
        int a = *it;
        int b = -1;
        if(it+1!= myVector.end())
        {
            it++;
            b=*(it);
        }
        if(a>=b)
        {
            std::pair<int, int> pp= std::make_pair(a, b);
            tmpP.push_back(pp);
        }
        else if(a<=b)
        {
            std::pair<int, int> pp= std::make_pair(b, a);
            tmpP.push_back(pp);
        } 
        
    }
    bigOne.push_back(tmpP);
    for(std::vector<std::vector<std::pair<int, int> > >::iterator it = bigOne.begin(); it != bigOne.end(); it++)
    {
        mergeSort(*it, 0, it->size() -1);
    }
    myVector.clear();
    // printVecVec(bigOne);
    std::vector<int>::iterator it1;
    //std::cout<<"---->after merge---->:   "<<std::endl;
    for (std::vector<std::vector<std::pair<int, int> > >::const_iterator it1 = bigOne.begin(); it1 != bigOne.end(); ++it1) {
        for (std::vector<std::pair<int, int> >::const_iterator innerIt = it1->begin(); innerIt != it1->end(); ++innerIt) {
           // std::cout << "(" << innerIt->first << ", " << innerIt->second << ") ";
          myVector.push_back(innerIt->first);
        }
        std::cout << std::endl;
    }
     std::vector<int>::iterator tmp_it;
     std::vector<int>::iterator it_new;
    for (std::vector<std::vector<std::pair<int, int> > >::const_iterator it2 = bigOne.begin(); it2 != bigOne.end(); ++it2) {
        for (std::vector<std::pair<int, int> >::const_iterator innerIt = it2->begin(); innerIt != it2->end(); ++innerIt) {
        //   for (std::vector<int>::iterator it_new = myVector.begin(); it_new != myVector.end(); ++it_new) 
        //   {
         tmp_it=std::lower_bound(myVector.begin(),myVector.end(),innerIt->second);
         if(innerIt->second!=-1)
            myVector.insert(tmp_it,innerIt->second);
          }
        }
       std::cout << std::endl;

    std::vector<int>::iterator itt;
    std::cout<<"After:";
     for (std::vector<int>::iterator itt = myVector.begin(); itt != myVector.end(); ++itt) {
        std::cout<<" "<<*itt;
     }
      std::cout << std::endl;
}

void Pmerge::printVecVec(const std::vector<std::vector<std::pair<int, int> > > &vec)
{
	for (std::vector<std::vector<std::pair<int, int> > >::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        for (std::vector<std::pair<int, int> >::const_iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt) {
            std::cout << "(" << innerIt->first << ", " << innerIt->second << ") ";
        }
        std::cout << std::endl;
    }
}

void Pmerge::merge(std::vector<std::pair<int, int> >& vec, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    std::vector<std::pair<int, int> > Left(n1), Right(n2);

    for (i = 0; i < n1; i++)
        Left[i] = vec[l + i];
    for (j = 0; j < n2; j++)
        Right[j] = vec[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (Left[i].first <= Right[j].first)
        {
            vec[k] = Left[i];
            i++;
        }
        else
        {
            vec[k] = Right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        vec[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        vec[k] = Right[j];
        j++;
        k++;
    }
}

const char *	Pmerge::InvalidIndex::what() const throw()
{
    return "Error: Invalid Index";
}








//for deque


void Pmerge::fill_stack_deque(char** av)
{
    int i=1;
    while(av[i])
    {
        myVector_deque.push_back(atoi(av[i]));
        i++;
    }
    std::deque<int>::iterator it;
     std::cout<<"After: ";
   for (std::deque<int>::iterator it = myVector_deque.begin(); it != myVector_deque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void Pmerge::mergeSort_deque(std::deque<std::pair<int, int> >& vec, int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        mergeSort_deque(vec, l, m);
        mergeSort_deque(vec, m + 1, r);
        merge_deque(vec, l, m, r);
    }
}

void Pmerge::fill_second_stack_deque()
{
    std::deque<std::deque<std::pair<int, int> > >bigOne;
    std::deque<int>::iterator it = myVector_deque.begin();
    std::deque<std::pair<int, int > > tmpP; 
    for (; it != myVector_deque.end(); ++it) {
        int a = *it;
        int b = -1;
        if(it+1!= myVector_deque.end())
        {
            it++;
            b=*(it);
        }
        if(a>=b)
        {
            std::pair<int, int> pp= std::make_pair(a, b);
            tmpP.push_back(pp);
        }
        else
        {
            std::pair<int, int> pp= std::make_pair(b, a);
            tmpP.push_back(pp);
        } 
        
    }
    bigOne.push_back(tmpP);
    for(std::deque<std::deque<std::pair<int, int> > >::iterator it = bigOne.begin(); it != bigOne.end(); it++)
    {
        mergeSort_deque(*it, 0, it->size() -1);
    }
    myVector_deque.clear();
    // printVecVec_deque(bigOne);
    std::deque<int>::iterator it1;
    // std::cout<<"---->after merge for deque---->:   "<<std::endl;
    for (std::deque<std::deque<std::pair<int, int> > >::const_iterator it1 = bigOne.begin(); it1 != bigOne.end(); ++it1) {
        for (std::deque<std::pair<int, int> >::const_iterator innerIt = it1->begin(); innerIt != it1->end(); ++innerIt) {
           // std::cout << "(" << innerIt->first << ", " << innerIt->second << ") ";
          myVector_deque.push_back(innerIt->first);
        }
        std::cout << std::endl;
    }
     std::deque<int>::iterator tmp_it;
    for (std::deque<std::deque<std::pair<int, int> > >::const_iterator it2 = bigOne.begin(); it2 != bigOne.end(); ++it2) {
        for (std::deque<std::pair<int, int> >::const_iterator innerIt = it2->begin(); innerIt != it2->end(); ++innerIt) {
         tmp_it=std::lower_bound(myVector_deque.begin(),myVector_deque.end(),innerIt->second);
        if(innerIt->second!=-1)
         myVector_deque.insert(tmp_it,innerIt->second );
        }
       std::cout << std::endl;
    }
    std::deque<int>::iterator itt;
     std::cout<<"After:";
   // std::cout<<"---->after sorting for deque---->:   "<<std::endl;
     for (std::deque<int>::iterator itt = myVector_deque.begin(); itt != myVector_deque.end(); ++itt) {
        std::cout<<" "<<*itt;
     }
     std::cout<<std::endl;
    //printVecVec(bigOne);
}

// void Pmerge::printVecVec_deque(const std::deque<std::deque<std::pair<int, int> > > &vec)
// {
// 	for (std::deque<std::deque<std::pair<int, int> > >::const_iterator it = vec.begin(); it != vec.end(); ++it) {
//         for (std::deque<std::pair<int, int> >::const_iterator innerIt = it->begin(); innerIt != it->end(); ++innerIt) {
//             std::cout << "(" << innerIt->first << ", " << innerIt->second << ") ";
//         }
//         std::cout << std::endl;
//     }
// }

void Pmerge::merge_deque(std::deque<std::pair<int, int> >& vec, int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    std::deque<std::pair<int, int> > L(n1), R(n2);

    for (i = 0; i < n1; i++)
        L[i] = vec[l + i];
    for (j = 0; j < n2; j++)
        R[j] = vec[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i].first <= R[j].first)
        {
            vec[k] = L[i];
            i++;
        }
        else
        {
            vec[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        vec[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        vec[k] = R[j];
        j++;
        k++;
    }
}