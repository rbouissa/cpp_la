
#include"Fixed.hpp"

Fixed::Fixed(){
fixed_point_nb=0;
}

Fixed::Fixed(const Fixed &t)
{
    *this=t;
}

Fixed &Fixed :: operator=(const Fixed& o)
{
    if(this != &o)
    {
       fixed_point_nb=o.fixed_point_nb;
    }
    return *this;
}

Fixed::Fixed(const int a){
    fixed_point_nb=a<<fractional_bits;
}

Fixed::Fixed(const float a)
{
    fixed_point_nb = roundf(a * (float)(1<<fractional_bits));
}

Fixed::~Fixed()
{
}

float Fixed :: toFloat( void ) const
{
    return((float)(fixed_point_nb) / (float)(1<<fractional_bits));
}
 
int Fixed::toInt( void ) const{
    return round(fixed_point_nb>>fractional_bits);
}

int Fixed :: getRawBits( void ) const{
    return fixed_point_nb;
}

void Fixed :: setRawBits( int const raw ){
    fixed_point_nb = raw;
}

std::ostream& operator<<(std::ostream& h,const Fixed& o)
{
   return h<<o.toFloat();
}

  Fixed Fixed :: operator-(const Fixed& o) const
  {
   return Fixed(toFloat()-o.toFloat());
  }

   Fixed Fixed :: operator+(const Fixed& o) const
  {
    return Fixed(toFloat()+o.toFloat());
  }


   Fixed Fixed :: operator*(const Fixed& o) const
  {
    return Fixed(toFloat()*o.toFloat());
  }

   Fixed Fixed :: operator/(const Fixed& o) const
  {
    return Fixed(toFloat()/o.toFloat());
  }

  //bool operators
  
  bool Fixed ::operator>(const Fixed& o) const
  {
    return(this->fixed_point_nb>o.fixed_point_nb); 
  }
   bool Fixed ::operator<(const Fixed& o) const
  {
    return(this->fixed_point_nb<o.fixed_point_nb); 
  }
   bool Fixed ::operator>=(const Fixed& o) const
  {
    return(this->fixed_point_nb>=o.fixed_point_nb); 
  }
  bool Fixed ::operator<=(const Fixed& o) const
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
const Fixed& Fixed :: min(const Fixed& t,const Fixed& k) 
  {
    if(t<k)
        return t;
    return k;
  }

 const Fixed& Fixed :: max( const Fixed& t,const Fixed& k)  
  {
    if(t>k)
        return t;
    return k;
  }
 
Fixed& Fixed :: max( Fixed& t,Fixed& k)
  {
    if(t>k)
        return t;
    return k;
  }

Fixed& Fixed :: min(Fixed& t,Fixed& k)
  {
    if(t<k)
        return t;
    return k;
  }