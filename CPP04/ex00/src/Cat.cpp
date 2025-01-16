/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:03:05 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:33:37 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat(){
    _type = "Cat";
    std::cout << YE "Cat constructor called!" RS <<std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy){
    this->_type = copy._type;
}

Cat &Cat::operator=(const Cat &copy){
    _type = copy._type;
    std::cout << YE "Cat copy assigment operator called!" RS << std::endl;
    return *this;
}

Cat::~Cat(){
    std::cout << YE "Cat destructor called!" RS << std::endl;
}

void Cat::makeSound()const{
    std::cout << YE "Meuw! Meuw!" RS << std::endl;
}