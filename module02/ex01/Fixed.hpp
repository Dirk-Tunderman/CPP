#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _fixedPointValue;
    static const int _fractionalBits;      // Static constant integer to store the number of fractional bits

public:
    Fixed();                               // Default constructor
    Fixed(const int integer);              // Constructor that takes an integer as a parameter
    Fixed(const float floatingP);          // Constructor that takes a floating-point number as a parameter
    Fixed(const Fixed &fixed);             // Copy constructor
    ~Fixed();                              // Destructor
    Fixed &operator=(const Fixed &fixed);  // Copy assignment operator

    int getRawBits(void) const;            // Returns the raw value of the fixed-point number
    void setRawBits(int const raw);        // Sets the raw value of the fixed-point number

    float toFloat(void) const;             // Converts the fixed-point value to a floating-point value
    int toInt(void) const;                 // Converts the fixed-point value to an integer value
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed); // Overload of the insertion operator

#endif // FIXED_HPP
