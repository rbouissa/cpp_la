#ifndef FIXED_H
#define FIXED_H
# include <iomanip>
# include <iostream>
# include <string>
class Fixed{
    private:
    int fixed_point_nb;
   const static int fractional_bits = 8;
   public:
    Fixed();
    Fixed(Fixed &t);
    Fixed& operator=(const Fixed& o);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw ); 
};

#endif
