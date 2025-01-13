/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 14:36:20 by rostik            #+#    #+#             */
/*   Updated: 2025/01/13 16:06:01 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(): _value(0){

}

Fixed::Fixed(const Fixed& other){
    _value = other._value;
}

Fixed::Fixed(int const intValue){
    _value = intValue << _fractionalBits;
}

Fixed::Fixed(float const floatValue){
    _value= roundf(floatValue * (1<< _fractionalBits));
}

Fixed& Fixed::operator=(const Fixed& other){
    _value = other._value;
        return *this;
}

Fixed::~Fixed(){

}

int Fixed::getRawBits() const{
    return _value;
}

void Fixed::setRawBits(int const raw){
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

bool Fixed::operator>(const Fixed& other) const{
    return _value > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const{
    return _value < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const{
    return _value >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const{
    return _value <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const{
    return _value == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const{
    return _value != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other)const{
    return Fixed(toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other)const{
    return Fixed(toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other)const{
    return Fixed(toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other)const{
    return Fixed(toFloat() / other.toFloat());
}

Fixed &Fixed::operator++(){
    this->_value++;
    return*this;
}

Fixed &Fixed::operator--(){
    this->_value--;
    return *this;
}

Fixed Fixed::operator++(int){
    Fixed tmp = *this;
    ++(*this);
    return *this;
}

Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    --(*this);
    return *this;
}

Fixed &Fixed::min(Fixed& a, Fixed& b){
    return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed& a, const Fixed& b){
    return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed& a, Fixed& b){
    return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed& a, const Fixed& b){
    return (a > b) ? a : b;
}