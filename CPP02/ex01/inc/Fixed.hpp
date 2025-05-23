/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:18:35 by rostik            #+#    #+#             */
/*   Updated: 2025/01/13 14:00:42 by rostik           ###   ########.fr       */
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
        Fixed(int const value); //constructor with integer
        Fixed(float const value); // constructor with floeating point number
        ~Fixed(); // Destructor

        Fixed& operator=(const Fixed& rhs); // copy assigment operator overload
        
        int getRawBits() const;
        void setRawBits(int const raw);
        float toFloat()const;
        int toInt()const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif