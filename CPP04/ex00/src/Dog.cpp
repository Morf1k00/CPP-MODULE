/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:06:59 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:34:15 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(){
    _type = "Dog";
    std::cout << RD "Dog constructor called!" RS<<std::endl;
}

Dog::Dog(const Dog &copy) :Animal(copy){
    this->_type = copy._type;
    std::cout << RD "Dog copy constructor called!" RS << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
    _type = copy._type;
    std::cout << RD "Dog copy assigment operator called!" RS << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << RD "Dog destructor called!" RS<<std::endl;
}

void Dog::makeSound()const {
    std::cout << RD "Woof! Woof!" RS <<std::endl;
}