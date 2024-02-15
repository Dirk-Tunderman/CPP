#include "Fixed.hpp"



Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = integer << this->_fractionalBits;
}

Fixed::Fixed(const float floatingP)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(floatingP * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointValue = fixed.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const
{
    return (float)this->_fixedPointValue / (1 << this->_fractionalBits);
}

int Fixed::toInt(void) const
{
    return this->_fixedPointValue >> this->_fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

