/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:15:58 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 14:06:55 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(std::string type): _type(type){

}

Weapon::~Weapon(){

}

std::string Weapon::getType() const{
    return(_type);
}

void Weapon::setType(std::string type){
    this->_type= type;
}