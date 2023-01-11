#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed& orig )
{
    std::cout << "Copy constructor called" << std::endl;

    *this = orig; // 자신을 가리키는 포인터라서 *을 붙여야 한다.
}

Fixed&  Fixed::operator=( const Fixed& orig )
{
    std::cout << "Copy assignment operator called" << std::endl;

	value = orig.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;

    return (this->value);
}

void    Fixed::setRawBits( int const raw )
{
    this->value = raw;
}
