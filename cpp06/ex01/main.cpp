#include"Serialize.hpp"

int main()
{
    Data *d = new Data;

    d->data_name = "our data";
    d->value = 67;
    std::cout<<"Befor Serialization     : "<<std::endl;
    std::cout << "Data name: " << d->data_name << std::endl;
    std::cout << "Data value: " << d->value << std::endl;
    std::cout<<"address of data pointer: "<<d<<std::endl;
    uintptr_t raw = Serializer::Serialize(d);
    std::cout<<"After Serialization  :  "<<std::endl;
    std::cout << "Raw: " << raw << std::endl;
    std::cout << "Raw: " << std::hex <<raw<<std::endl;
    Data *d2 = Serializer::deserialize(raw);
    std::cout<<"After Desrialization"<<std::endl;
    std::cout << "Data name: " << d2->data_name << std::endl;
    std::cout << "Data value: " << d2->value << std::endl;
    delete d;
}