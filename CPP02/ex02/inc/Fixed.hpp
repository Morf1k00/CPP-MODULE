/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:20:24 by rostik            #+#    #+#             */
/*   Updated: 2025/01/13 15:54:06 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
    private:
        int _value; // value 
        static const int _fractionalBits; // number bits
    public:
        Fixed();// Construnctor
        Fixed(const Fixed& other); // copy constructor
        Fixed(int const intValue); //constructor with integer
        Fixed(float const floatValue); // constructor with floeating point number
        ~Fixed(); // Destructor

        //Operator overloads
        Fixed& operator=(const Fixed& rhs); // copy assigment operator overload
        
        //Comparison Operator
        bool operator>(const Fixed& rhs) const;
        bool operator<(const Fixed& rhs) const;
        bool operator>=(const Fixed& rhs) const;
        bool operator<=(const Fixed& rhs) const;
        bool operator==(const Fixed& rhs) const;
        bool operator!=(const Fixed& rhs) const;

        //Arithmetic Operators
        Fixed operator+(const Fixed& rhs) const;
        Fixed operator-(const Fixed& rhs) const;
        Fixed operator/(const Fixed& rhs) const;
        Fixed operator*(const Fixed& rhs) const;

        //Increment/Decrement operators
        Fixed &operator++(); //Pre-increment
        Fixed operator++(int);//Post-increment
        Fixed &operator--();//Pre-decrement
        Fixed operator--(int);//Post-decrement

        //Public member Function
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat()const;
        int toInt()const;

        //Static member Function
        static Fixed& min (Fixed& a, Fixed& b);
        static const Fixed& min (const Fixed& a, const Fixed& b);
        static Fixed& max (Fixed& a, Fixed& b);
        static const Fixed& max (const Fixed& a, const Fixed& b);
};

//Non-member Overloaded Operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif