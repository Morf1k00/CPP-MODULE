/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:18:37 by rostik            #+#    #+#             */
/*   Updated: 2025/01/13 14:18:19 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value){
    std::cout<< "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}

Fixed::Fixed(float const value){
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value *(1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other) : _value(other._value){
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs){
    std::cout << "Copy assigment operator called" << std::endl;
        if (this != &rhs)
            _value=rhs._value;
        return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    _value = raw;
}

int Fixed::toInt() const{
    return _value >> _fractionalBits;
}

float Fixed::toFloat() const{
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed){
    out << fixed.toFloat();
    return(out);
}
