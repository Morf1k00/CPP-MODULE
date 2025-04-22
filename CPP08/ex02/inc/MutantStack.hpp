/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:40:00 by rostik            #+#    #+#             */
/*   Updated: 2025/04/22 13:00:49 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "iostream"
#include <vector>
#include <exception>
#include <algorithm>
#include <cmath>
#include <limits>
#include <stack>


template <typename T>
class MutantStack : public std::stack<T>{
    public:
        typedef typename std::stack<T>::container_type::iterator iterator;
    public:
        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &copy);
        ~MutantStack();

    iterator begin();
    iterator end();
};

template <typename T>
MutantStack<T>::MutantStack(){

}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy){
    *this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy){
    std::stack<T>::operator=(copy);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack(){
    
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(){
    return this->c.begin();
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>:: end(){
    return this->c.end();
}

#endif