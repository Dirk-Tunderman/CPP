#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fractionalBits = 8; // Number of fractional bits, always constant

// Default constructor
Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointValue = 0;
}


// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}


// Comparison operators
bool Fixed::operator>(const Fixed& rhs) const {
    std::cout << "Greater than operator called" << std::endl;
    return this->_fixedPointValue > rhs._fixedPointValue;
}

bool Fixed::operator<(const Fixed& rhs) const {
    std::cout << "Less than operator called" << std::endl;
    return this->_fixedPointValue < rhs._fixedPointValue;
}


// Arithmetic operators
Fixed Fixed::operator+(const Fixed& rhs) const {
    std::cout << "Addition operator called" << std::endl;
    Fixed result;
    result.setRawBits(this->_fixedPointValue + rhs._fixedPointValue);
    return result;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointValue = raw;
}

float Fixed::toFloat(void) const {
    return (float)this->_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt(void) const {
    return this->_fixedPointValue >> _fractionalBits;
}

// Implement addition (+), subtraction (-), multiplication (*), and division (/) operators


Fixed Fixed::operator-(const Fixed& rhs) const {
    std::cout << "Subtraction operator called" << std::endl;
    Fixed result;
    result.setRawBits(this->_fixedPointValue - rhs._fixedPointValue);
    return result;
}

// Implement multiplication (*) and division (/) operators


Fixed Fixed::operator*(const Fixed& rhs) const {
    std::cout << "Multiplication operator called" << std::endl;
    Fixed result;
    result.setRawBits((this->_fixedPointValue * rhs._fixedPointValue) >> _fractionalBits);
    return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    std::cout << "Division operator called" << std::endl;
    Fixed result;
    result.setRawBits((this->_fixedPointValue << _fractionalBits) / rhs._fixedPointValue);
    return result;
}

Fixed::Fixed(Fixed const& src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(float const value) {
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(int const value) {
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = value << _fractionalBits;
}


// Implement pre-increment (++) and post-increment (++) operators


// Increment/Decrement operators
Fixed& Fixed::operator++() {
    std::cout << "Pre-increment operator called" << std::endl;
    this->_fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int) {
    std::cout << "Post-increment operator called" << std::endl;
    Fixed temp = *this;
    ++(*this);
    return temp;
}

// Implement pre-decrement (--) and post-decrement (--) operators

// Static min/max functions
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    std::cout << "Min function called" << std::endl;
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    std::cout << "Const min function called" << std::endl;
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    std::cout << "Max function called" << std::endl;
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    std::cout << "Const max function called" << std::endl;
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

// Overload of the insertion operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    std::cout << "Insertion operator called" << std::endl;
    out << fixed.toFloat();
    return out;
}
