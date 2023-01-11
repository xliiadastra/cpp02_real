#include "Fixed.hpp"

int main( void ) 
{
    Fixed a; // 생성
    Fixed b( a ); // 복사생성
    Fixed c; // 생성

    c = b; // 복사 대입 연산자 == c.operator=(b);
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    return 0;
}