#ifndef FIXED_HPP

# define FIXED_HPP
#include <iostream>
#include <string>
#include <cmath>


class Fixed
{
    private:
        int _fixedPointValue;
        static const int _fractionalBits = 8;

    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floatingP);
        Fixed(const Fixed &fixed);
        ~Fixed();
        Fixed &operator=(const Fixed &fixed);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif