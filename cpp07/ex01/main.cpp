#include"iter.hpp"
int main(){
    Bureaucrat *b;
    b = new Bureaucrat[2];
   b[0].set_name("mehdi");
    b[1].set_name("isam");
    std::cout<<"--------ARRAY OF STRINGS--------"<<std::endl;
    const std::string t1[] = {"goggins","Cbum","Colman","kutler"};
    Iter(t1,4,show_our_data< const std::string>);
    std::cout<<"--------ARRAY OF INTEGERS--------"<<std::endl;
    int t2[]={2,8,303,399,8998};
    Iter(t2,5,show_our_data<const int>);
    std::cout<<"--------ARRAY OF FLOAT--------"<<std::endl;
     float t3[]={2,8.9,303.4,399.5,8998.6};
    Iter(t3,5,show_our_data<const float>);
   std::cout<<"--------ARRAY OF OBJECT-------"<<std::endl;
   Iter(b,2,show< Bureaucrat>);
   delete[] b;
   return 0;
}
    
    
