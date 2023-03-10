#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 value;
    const static int    fraction = 8;

public:
    Fixed();
    ~Fixed();
    Fixed( const Fixed& orig );

    Fixed&   operator=( const Fixed& orig );
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
};

#endif