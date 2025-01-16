/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:03:05 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:21:09 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(){
    _type = "Cat";
    std::cout << "Cat constructor called!" <<std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy){
    this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &copy){
    _type = copy._type;
    std::cout << "Cat copy assigment operator called!" << std::endl;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called!" << std::endl;
}

void Cat::makeSound()const{
    std::cout << "Meuw! Meuw!" << std::endl;
}