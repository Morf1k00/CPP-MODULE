/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 11:00:11 by rostik            #+#    #+#             */
/*   Updated: 2025/04/22 12:27:46 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(){
    _size = 0;
    _longSpan = 0;
    _shortSpan = 0;
}

Span::Span(unsigned int size){
    if (size > 0){
        _size = size;
        _vect.reserve(size);
        _longSpan = 0;
        _shortSpan = 0;
    }
}

Span::Span(const Span &copy){
    *this = copy;
}

Span &Span::operator=(const Span &copy){
    if (this != &copy){
        _vect = copy._vect;
        _size = copy._size;
        _longSpan = copy._longSpan;
        _shortSpan = copy._shortSpan;
    }
    return *this;
}

Span::~Span(){
    
}

void Span::addNumber(int Num){
    if (_vect.size() >= _size)
        throw tooMuchElements();

    _vect.push_back(Num);
}

int Span::shortestSpan(){
    if (_vect.size() < 2)
        throw smallVector();

    std::vector<int> tmp = _vect;
    std::sort(tmp.begin(), tmp.end());

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 1; i < tmp.size(); i++){
        int span = tmp[i] - tmp[i -1];
        if (span < shortest)
            shortest = span;
    }
    _shortSpan = shortest;
    return (_shortSpan);
}

int Span::longestSpan(){
    if (_vect.size() < 2)
        throw smallVector();
    
    std::vector<int> tmp = _vect;
    std::sort(tmp.begin(), tmp.end());
    
    _longSpan = *(tmp.end() - 1)- *(tmp.begin());
    
    return(_longSpan);
}
