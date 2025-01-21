/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:35:57 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 17:06:59 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog(){
    _type = "Dog";
    _brain = new Brain();
    std::cout << RD "Dog constructor called!" RS<<std::endl;
}

Dog::Dog(const Dog &copy) :Animal(copy){
    this->_type = copy._type;
    _brain =  new Brain(*copy._brain);// deep copy of brain object
    std::cout << RD "Dog copy constructor called!" RS << std::endl;
}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy){
        delete _brain;
        _brain =  new Brain(*copy._brain);
        _type = copy._type;
        std::cout << RD "Dog copy assigment operator called!" RS << std::endl;
    }
    return *this;
}

Dog::~Dog(){
    delete _brain;
    std::cout << RD "Dog destructor called!" RS<<std::endl;
}

void Dog::makeSound()const {
    std::cout << RD "Woof! Woof!" RS <<std::endl;
}