#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iostream>

class Fixed
{
private:
    int                 num;
    const static int    fraction = 8;

public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& obj);

    Fixed&   operator=(const Fixed& obj);
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    Fixed&  operator=(int16_t obj);

};

#endif