/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 10:36:14 by rostik            #+#    #+#             */
/*   Updated: 2025/04/22 12:24:11 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include "iostream"
#include <vector>
#include <exception>
#include <algorithm>
#include <cmath>
#include <limits>

class Span{
    private:
        unsigned int _size;
        std::vector<int> _vect;
        int _longSpan;
        int _shortSpan;
    public:
        Span();
        Span(unsigned int size);
        Span(const Span &copy);
        Span &operator=(const Span &copy);
        ~Span();
    public:
        void addNumber(int Num);
        int shortestSpan();
        int longestSpan();
        
};

class tooMuchElements: public std::exception{
    const char *what() const throw()
    {
        return ("TOO much elements in vector!");
    }
};

class smallVector: public std::exception{
    const char *what() const throw()
    {
        return("We have only 2 elements in stuck!");
    }
};

class emptyVector: public std::exception{
    const char *what() const throw()
    {
        return("Stuck is empty!");
    }
};

#endif