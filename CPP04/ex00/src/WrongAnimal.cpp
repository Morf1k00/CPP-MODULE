/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:26:55 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:21:46 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    _type = "WrongAnimal";
    std::cout << "WrongAnimal constructor called!"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    this->_type = copy._type;
    std::cout << "WrongAnimal copy constructor called!" <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
    _type = copy._type;
    std::cout << "WrongAnimal copy asiigment operator called!" <<std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called!" <<std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "wrongAnimal make a sounds!" <<std::endl;
}

std::string WrongAnimal::getType() const{
    return _type;
}

