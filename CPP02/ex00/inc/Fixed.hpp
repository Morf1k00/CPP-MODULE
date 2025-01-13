/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:52:04 by rostik            #+#    #+#             */
/*   Updated: 2025/01/13 12:57:55 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int _value; // value 
        static const int _fractionalBits; // number bits
    public:
        Fixed();// Construnctor
        Fixed(const Fixed& other); // copy constructor
        Fixed& operator=(const Fixed& rhs); // copy assigment operator overload
        ~Fixed(); // Destructor

        int getRawBits() const;
        void setRawBits(int const raw);
};

#endif