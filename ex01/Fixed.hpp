#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
    int                 value;
    const static int    fraction = 8;

public:
    Fixed();
    Fixed( const int num );
    Fixed( const float num );
    Fixed( const Fixed &orig );
    Fixed&   operator=( const Fixed& orig );
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const ;
    int     toInt( void ) const;
};

//operator<<();

#endif