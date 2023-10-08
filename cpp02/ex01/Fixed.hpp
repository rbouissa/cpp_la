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
    Fixed(Fixed &t);
    Fixed& operator=(const Fixed& o);
    ~Fixed();
    Fixed(const int a);
    Fixed(const float a);
    int getRawBits( void ) const;
    void setRawBits( int const raw ); 
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream& operator<<(std::ostream& h,const Fixed& o);
#endif