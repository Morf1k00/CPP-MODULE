/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:50:01 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:32:58 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal(){
    _type = "Animal";
    std::cout << GR "Animal default constructor called!" RS<< std::endl;
}

Animal::Animal(const Animal &copy){
    this->_type = copy._type;
    std::cout << GR "Animal copy constructor called!" RS<< std::endl;
}

Animal &Animal::operator=(const Animal &copy){
    _type = copy._type;
    std::cout << GR "Animal copy assigment operator called!" RS<< std::endl;
    return *this;
}

Animal::~Animal(){
    std::cout << GR"Animal destructor called!" RS << std::endl;
}

void Animal::makeSound() const {
    std::cout << GR "Animal make a sounds!" RS << std::endl;
}

std::string Animal::getType() const{
    return _type;
}

