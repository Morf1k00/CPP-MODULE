/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:48 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 17:23:44 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Brain.hpp"

Cat::Cat(){
    _type = "Cat";
    _brain = new Brain();
    std::cout << YE "Cat constructor called!" RS <<std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy){
    this->_type = copy._type;
    this->_brain =  new Brain(*copy._brain);
    std::cout << YE "Cat copy constructor called!" RS << std::endl;
}

Cat &Cat::operator=(const Cat &copy){
     if (this != &copy){
        delete _brain;
        _brain =  new Brain(*copy._brain);
        _type = copy._type;
        std::cout << YE "Cat copy assigment operator called!" RS << std::endl;
    }
    return *this;
}

Cat::~Cat(){
    delete _brain;
    std::cout << YE "Cat destructor called!" RS << std::endl;
}

void Cat::makeSound()const{
    std::cout << YE "Meuw! Meuw!" RS << std::endl;
}