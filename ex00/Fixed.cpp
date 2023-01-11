#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl; // 기본 생성자
    this->value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
// 소멸자 객체가 소멸되는 시점에서 자동으로 호출되어 사용이 끝난 객체를 정리해준다
}

Fixed::Fixed( const Fixed& orig ) // & 로 인자를 받는 이유는 오버헤드가 생기는 것을 방지하기 위해이다.
{
    std::cout << "Copy constructor called" << std::endl;
// 복사 생성자 같은 클래스 타입의 다른 객체를 인자로 전달받아 자기자신을 초기화하는 생성자

    *this = orig; // this는 자신을 가리키는 포인터라서 *을 붙여야 한다.
}

Fixed&  Fixed::operator=( const Fixed& orig )
{
    std::cout << "Copy assignment operator called" << std::endl;
// 복사 대입 연산자 대입 연산자를 오버로딩하여 기존의 대입 연산자를 재정의.
// operator overloding : 기본 연산자를 사용자가 직접 정의하는 것.
// 디폴트 복사 생성자는 얕은 복사를 하는 반면 복사 생성자는 깊은 복사를 해야하는데, 
// 이때 대입 연산자(=)를 오버로딩 할 필요가 있다. 객체 복사를 하기 때문에..
// 얕은 복사는 주소값을 그대로 쓰는 느낌이지만 깊은 복사는 메모리까지 새로 전부 할당해주는 복사이다.

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
