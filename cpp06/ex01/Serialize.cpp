#include"Serialize.hpp"

Serializer::~Serializer()
{
    std::cout<<"Serializer Deconstructor Called"<<std::endl;
}

Serializer::Serializer()
{
    std::cout<<"Serializer Constructor Called"<<std::endl;
}
 uintptr_t  Serializer::Serialize(Data* ptr)
{
   return reinterpret_cast<uintptr_t>(ptr);

}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

Serializer::Serializer(const Serializer &o)
{
    *this = o;
}