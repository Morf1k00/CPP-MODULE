/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:36:16 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 16:36:38 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(){
    _type = "WrongCat";
    std::cout << MG "WrongCat constructor called!" RS << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    this->_type = copy._type;
    std::cout << MG "WrongCat copy constructor called!" RS << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    _type = copy._type;
    std::cout << MG "WrongCat copy assigment operator called!" RS <<std::endl;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << MG "WrongCat destructor called!" RS <<std::endl;
}

void WrongCat::makeSound() const{
    std::cout << MG "BARK! BArK!" RS << std::endl;
}