/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 12:17:05 by rostik            #+#    #+#             */
/*   Updated: 2025/04/16 13:09:36 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(){
    // std::cout << "Default constructor called!" << std::endl;
    _data = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
    // std::cout << "Constructor with parametr called!" << std::endl;
    _data = new T[n];
    _size = n;
}  

template <typename T>
Array<T>::Array(const Array &other){
    // std::cout << "Copy constructor called!" << std::endl;
    _size = other._size;
    _data = new T[_size];
    for (unsigned int i = 0; i < _size; ++i)
        _data[i] = other._data[i];
}    

template <typename T>
Array<T>& Array<T>::operator=(const Array<T> &other){
    // std::cout << "Copy asiigment constructor called!" << std::endl;
    if (this != &other){
        delete[] _data;
        _size = other._size;
        _data = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            _data[i] = other._data[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array(){
    // std::cout<< "Destructor called!" << std::endl;
    delete[] _data;
}

template <typename T>
T& Array<T>::operator [](unsigned int index){
    if (index >= _size){
        throw std::out_of_range("Index out of range");
    }
    return(_data[index]);
}

template <typename T>
const T& Array<T>::operator [](unsigned int index) const{
    if (index >= _size){
        throw std::out_of_range("Index out of range");
    }
    return(_data[index]);
}

template <typename T>
unsigned int Array<T>::size() const{
    return(_size);
}