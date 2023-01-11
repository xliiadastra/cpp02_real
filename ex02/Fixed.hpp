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

    Fixed&  operator++(void);
    Fixed   operator++(int);
    Fixed&  operator--(void);
    Fixed   operator--(int);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    float   toFloat( void ) const ;
    int     toInt( void ) const;

    static Fixed&   min(Fixed &a, Fixed &b);
    static const Fixed& min(Fixed const &a, Fixed const &b);
    static Fixed&   max(Fixed &a, Fixed &b);
    static const Fixed& max(Fixed const &a, Fixed const &b);
};

std::ostream& operator<<(std::ostream& outputStream, const Fixed& fixed);

#endif