#include"Fixed.hpp"
#include <cstdio>

Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
fixed_point_nb=0;
}

Fixed::Fixed(Fixed &t)
{
    std::cout<<"Copy constructor called"<<std::endl;
    *this=t;
}

Fixed &Fixed :: operator=(const Fixed& o)
{
    if(this != &o)
    {
       std::cout <<"Copy assignment operator called"<<std::endl;
        fixed_point_nb=o.getRawBits();
    }
    
    return *this;

}

Fixed::~Fixed()
{
     std::cout<<"Destructor called"<<std::endl;
}

int Fixed :: getRawBits( void ) const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return fixed_point_nb;
}

void Fixed :: setRawBits( int const raw ){
    fixed_point_nb = raw;
}
