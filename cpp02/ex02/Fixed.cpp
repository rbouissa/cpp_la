
#include"Fixed.hpp"

Fixed::Fixed(){
    //std::cout<<"Default constructor called"<<std::endl;
fixed_point_nb=0;
}

Fixed::Fixed(const Fixed &t)
{
   // std::cout<<"Copy constructor called"<<std::endl;
    *this=t;
}

Fixed &Fixed :: operator=(const Fixed& o)
{
    if(this != &o)
    {
       //std::cout <<"Copy assignment operator called"<<std::endl;
       fixed_point_nb=o.fixed_point_nb;
    }
    return *this;
}

Fixed::Fixed(const int a){
    //std::cout<<"Int constructor called"<<std::endl;
    fixed_point_nb=a<<fractional_bits;
}

Fixed::Fixed(const float a)
{
    //std::cout<<"Float constructor called"<<std::endl;
    fixed_point_nb = a*(1<<fractional_bits);
}

Fixed::~Fixed()
{
     //std::cout<<"Destructor called"<<std::endl;
}

float Fixed :: toFloat( void ) const
{
    return(static_cast<float>(fixed_point_nb) / (1<<fractional_bits));
}

int Fixed::toInt( void ) const{
    return round(fixed_point_nb>>fractional_bits);
}

int Fixed :: getRawBits( void ) const{
    //std::cout<<"getRawBits member function called"<<std::endl;
    return fixed_point_nb;
}

void Fixed :: setRawBits( int const raw ){
    fixed_point_nb = raw;
}

std::ostream& operator<<(std::ostream& h,const Fixed& o)
{
   return h<<o.toFloat();
}

  Fixed Fixed :: operator-(const Fixed& o)
  {
   return Fixed(toFloat()-o.toFloat());
  }

   Fixed Fixed :: operator+(const Fixed& o)
  {
    return Fixed(toFloat()+o.toFloat());
  }

   Fixed Fixed :: operator*(const Fixed& o)
  {
    return Fixed(toFloat()*o.toFloat());
  }

   Fixed Fixed :: operator/(const Fixed& o)
  {
    return Fixed(toFloat()/o.toFloat());
  }
  //bool operators
  bool Fixed ::operator>(const Fixed& o)
  {
    return(this->fixed_point_nb>o.fixed_point_nb); 
  }
   bool Fixed ::operator<(const Fixed& o)
  {
    return(this->fixed_point_nb<o.fixed_point_nb); 
  }
   bool Fixed ::operator>=(const Fixed& o)
  {
    return(this->fixed_point_nb>=o.fixed_point_nb); 
  }
  bool Fixed ::operator<=(const Fixed& o)
  {
    return(this->fixed_point_nb<=o.fixed_point_nb); 
  }

//increment operators

Fixed& Fixed::operator++(){
    ++fixed_point_nb;
    return *this;
}

Fixed Fixed::operator++(int){
   Fixed copy=Fixed(*this);
   ++fixed_point_nb;
    return copy;
}

//min and max
  Fixed& Fixed :: min(Fixed& t,Fixed& k)
  {
    if(t<k)
        return t;
    return k;
  }
Fixed& Fixed :: max( Fixed& t,Fixed& k)
  {
    if(t>k)
        return t;
    return k;
  }
 