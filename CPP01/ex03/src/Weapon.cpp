/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:37:50 by rostik            #+#    #+#             */
/*   Updated: 2025/01/06 17:05:00 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

Weapon::Weapon(const std::string type) : _type(type){
}

Weapon::~Weapon(){
    
}

const std::string Weapon:: getType() const{
    return (_type);
}

void Weapon::setType(const std::string &type){
    this->_type = type;
}