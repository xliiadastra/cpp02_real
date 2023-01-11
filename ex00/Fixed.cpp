#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->num = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& obj )
{
    std::cout << "Copy constructor called" << std::endl;

    *this = obj; // 자신을 가리키는 포인터라서 *을 붙여야 한다.
}

Fixed&  Fixed::operator=( const Fixed& obj )
{
    std::cout << "Copy assignment operator called" << std::endl;

	num = obj.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return (this->num);
}

void    Fixed::setRawBits( int const raw )
{
    this->num = raw;
}
