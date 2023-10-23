#ifndef FIXED_H
#define FIXED_H
# include <iomanip>
# include <iostream>
# include <string>
#include<cmath>
class Fixed{
    private:
    int fixed_point_nb;
   const static int fractional_bits = 8;
   public:
    Fixed();
    Fixed(const Fixed &t);
    Fixed& operator=(const Fixed& o);
    Fixed(const int a);
    Fixed(const float a);
   
    int getRawBits( void ) const;
    void setRawBits( int const raw ); 
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed operator-(const Fixed& o) const ;
    Fixed operator+(const Fixed& o) const ;
    Fixed operator*(const Fixed& o) const;
    Fixed operator/(const Fixed& o) const ;
    bool operator>(const Fixed& o) const;
    bool operator<(const Fixed& o) const;
    bool operator>=(const Fixed& o) const;
    bool operator<=(const Fixed& o) const;
    bool operator==(const Fixed& o) const;
    bool operator!=(const Fixed& o) const;
    Fixed& operator++();
    Fixed operator++(int);
    static const  Fixed& min( const Fixed & t,const Fixed& k)  ;
     static const Fixed& max( const Fixed& t,const Fixed& k) ;
     static Fixed& min(Fixed& t,Fixed& k)  ;
     static Fixed& max( Fixed& t,Fixed& k)  ;
    ~Fixed();
 
};

std::ostream& operator<<(std::ostream& h,const Fixed& o);


#endif