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
    ~Fixed();
    Fixed&   operator=( const Fixed& orig );

    bool    operator>(const Fixed& obj) const;
    bool    operator<(const Fixed& obj) const;
    bool    operator>=(const Fixed& obj) const;
    bool    operator<=(const Fixed& obj) const;
    bool    operator==(const Fixed& obj) const;
    bool    operator!=(const Fixed& obj) const;

    Fixed    operator+(const Fixed& obj) const;
    Fixed    operator-(const Fixed& obj) const;
    Fixed    operator*(const Fixed& obj) const;
    Fixed    operator/(const Fixed& obj) const;

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const ;
    int     toInt( void ) const;

    Fixed&  operator++();
    Fixed   operator++(int);
    Fixed&  operator--();
    Fixed   operator--(int);

    static Fixed&         min(Fixed &a, const Fixed &b);
    static const Fixed&   min(const Fixed &a, const Fixed &b);
    static Fixed&         max(Fixed &a, const Fixed &b);
    static const Fixed&   max(const Fixed &a, const Fixed &b);
};

std::ostream& operator<<(std::ostream& outputStream, const Fixed& fixed);

#endif