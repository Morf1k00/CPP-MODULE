/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:36:07 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 16:36:10 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../inc/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    _type = "WrongAnimal";
    std::cout << BL "WrongAnimal constructor called!"<< std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    this->_type = copy._type;
    std::cout << BL "WrongAnimal copy constructor called!" RS <<std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
    _type = copy._type;
    std::cout << BL "WrongAnimal copy asiigment operator called!" RS <<std::endl;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << BL "WrongAnimal destructor called!" RS <<std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << BL "wrongAnimal make a sounds!" RS <<std::endl;
}

std::string WrongAnimal::getType() const{
    return _type;
}
