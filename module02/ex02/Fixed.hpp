#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _fixedPointValue;                  // Integer to store the fixed-point value
    static const int _fractionalBits;      // Number of fractional bits for the fixed-point representation

public:
    Fixed();                               // Default constructor
    Fixed(const int integer);              // Constructor to convert an integer to a fixed-point number
    Fixed(const float floatingP);          // Constructor to convert a float to a fixed-point number
    Fixed(const Fixed& fixed);             // Copy constructor
    ~Fixed();                              // Destructor

    Fixed& operator=(const Fixed& fixed);  // Copy assignment operator

    int getRawBits(void) const;            // Get the raw fixed-point value
    void setRawBits(int const raw);        // Set the raw fixed-point value

    float toFloat(void) const;             // Convert to a floating-point value
    int toInt(void) const;                 // Convert to an integer value

    // Comparison operators
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;

    // Arithmetic operators
    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;

    // Increment/Decrement operators
    Fixed& operator++();    // Pre-increment
    Fixed operator++(int);  // Post-increment
    Fixed& operator--();    // Pre-decrement
    Fixed operator--(int);  // Post-decrement

    // Static member functions for min/max
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed); // Overload of the insertion operator

#endif // FIXED_HPP
