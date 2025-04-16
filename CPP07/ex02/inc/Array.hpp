/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:51:16 by rostik            #+#    #+#             */
/*   Updated: 2025/04/16 13:08:13 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template <typename T>
class Array{
    private:
    T* _data;
    unsigned int _size;
    public:
    Array();                            //Default constructor
    Array(unsigned int n);              // Constructor with size
    Array(const Array &other);          // Copy constructor
    Array &operator=(const Array &other); // Assigment constructor
    ~Array();                               // Destructor
    
    T &operator [](unsigned int index);     //Subscript operator
    const T &operator [](unsigned int index) const;
    unsigned int size() const;              //Size return
};
#include "Array.tpp"

#endif