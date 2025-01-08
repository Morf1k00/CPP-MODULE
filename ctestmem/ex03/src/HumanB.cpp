/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:24:03 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 14:09:49 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _w(NULL){

}

HumanB::~HumanB(){

}

void HumanB::setWeapon(Weapon &weap){
    _w = &weap;
}

void HumanB::attack(){
    if(_w)
        std::cout << _name << " attack with theirs " << _w->getType() << std::endl;
    else
        std::cout << _name << " has no weapon!" << std::endl;
}

