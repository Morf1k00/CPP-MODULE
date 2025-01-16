/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:05:35 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:23:20 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(){
    _type = "WrongCat";
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    this->_type = copy._type;
    std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    _type = copy._type;
    std::cout << "WrongCat copy assigment operator called!" <<std::endl;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called!" <<std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "BARK! BArK!" << std::endl;
}