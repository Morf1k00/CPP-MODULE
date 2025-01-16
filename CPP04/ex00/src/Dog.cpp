/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:06:59 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 14:22:51 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(){
    _type = "Dog";
    std::cout << "Dog constructor called!"<<std::endl;
}

Dog::Dog(const Dog &copy){
    this->_type = copy._type;
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
    _type = copy._type;
    std::cout << "Dog copy assigment constructor called!" << std::endl;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called!" <<std::endl;
}

void Dog::makeSound()const {
    std::cout << "Woof! Woof!" <<std::endl;
}