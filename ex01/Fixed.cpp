#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = num << fraction;
}

Fixed::Fixed(const float num)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(num * (1 << fraction)); // 반올림 함수. fraction번째 이후로 반올림.
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

std::ostream& operator<<(std::ostream& outputStream, const Fixed& fixed)
{
    outputStream << fixed.toFloat();

    return (outputStream);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
//    std::cout << "getRawBits member function called" << std::endl;

    return (this->value);
}

void    Fixed::setRawBits( int const raw )
{
    this->value = raw;
}

float Fixed::toFloat( void ) const
{
    float   num;

    num = float(this->value) / (1 << fraction); // ex) (10 * 256) / (256) = 10
    return (num);
}

int Fixed::toInt( void ) const
{
    int num;

    num  = this->value >> fraction; // 고정소수점에 의해 소수점을 뒤로 보내준 것을 다시 fraction 만큼 앞으로 당기기
    return (num);
}