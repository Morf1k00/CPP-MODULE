/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:37:46 by rostik            #+#    #+#             */
/*   Updated: 2025/01/06 17:07:44 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanB.hpp"

HumanB::HumanB (std::string n): _name(n) {

}

HumanB::~HumanB(){

}

void HumanB::setWeapon(Weapon &w){
    _weapons = &w;
}

void HumanB::attack()
{
    if (_weapons)
        std::cout << _name << " attacks with their " << _weapons->getType() << std::endl;
    else
        std::cout << _name << " has no weapon!" << std::endl;
}