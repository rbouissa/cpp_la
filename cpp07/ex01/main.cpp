#include"iter.hpp"
int main(){
    std::cout<<"--------ARRAY OF STRINGS--------"<<std::endl;
    const std::string t1[] = {"goggins","Cbum","Colman","kutler"};
    Iter(t1,4,show_our_data< const std::string>);
    std::cout<<"--------ARRAY OF INTEGERS--------"<<std::endl;
    int t2[]={2,8,303,399,8998};
    Iter(t2,5,show_our_data<const int>);
    std::cout<<"--------ARRAY OF FLOAT--------"<<std::endl;
    float t3[]={2.5,3.8,55.25};
    Iter(t3,3,show_our_data<const float>);
}
