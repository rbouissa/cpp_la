#ifndef SERIALIZE_HPP
#define SERIALIZE_HPP
# include <iomanip>
# include <iostream>
# include <string>
#include<cmath>
#include<stdint.h>
struct Data
{
    std::string data_name;
    int value;
};

class Serializer{
    private:
   Serializer();
    Serializer(const Serializer &o);
    //Serializer& operator=(const Serializer& o);
    ~Serializer();
   public:
   static uintptr_t Serialize(Data* ptr);
   static Data* deserialize(uintptr_t raw);
    
};
#endif