/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:50:01 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:23:29 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(){
    _type = "Animal";
    std::cout << "Animal default constructor called!" << std::endl;
}

Animal::Animal(const Animal &copy){
    this->_type = copy._type;
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal &Animal::operator=(const Animal &copy){
    _type = copy._type;
    std::cout << "Animal copy assigment operator called!" << std::endl;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called!" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal make a sounds!" << std::endl;
}

std::string Animal::getType() const{
    return _type;
}

