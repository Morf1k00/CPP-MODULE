/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:18:35 by rostik            #+#    #+#             */
/*   Updated: 2025/01/27 13:54:02 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

#define GR "\033[1;32m" // Green color
#define YE "\033[1;33m" // Yellow color
#define RD "\033[1m\033[38;5;196m" // Red color
#define BL "\033[1;34m" //Blue color
#define MG "\033[1;35m" //Magenta color
#define RS "\033[0m" // Reset color
#define CY "\033[1;36m" // Cyan color
#define OR "\033[1;38;5;202m" // Orange color
#define PK "\033[1;38;5;213m" // Pink color

class Fixed {
    private:
        int _value; // value 
        static const int _fractionalBits; // number bits
    public:
        Fixed();// Construnctor
        Fixed(const Fixed &copy); // copy constructor
        Fixed(const int  value); //constructor with integer
        Fixed(const float  value); // constructor with floeating point number
        ~Fixed(); // Destructor

        Fixed &operator=(const Fixed &copy); // copy assigment operator overload
        
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat()const;
        int toInt()const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif