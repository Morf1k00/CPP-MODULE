/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 10:44:01 by rostik            #+#    #+#             */
/*   Updated: 2025/04/16 11:17:20 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include "iostream"

template <typename T>
void swap(T &a, T &b){
    T tmp = a; 
    a = b; 
    b = tmp;
}

template <typename T>
T min(T &a, T &b){
    if (a < b)
        return (a);
    else if (a > b)
        return(b);
    else    
        return (b);
}

template <typename T>
T max(T &a, T &b){
    if (a < b)
        return (b);
    else if (a > b)
        return(a);
    else    
        return (b);
}

#endif