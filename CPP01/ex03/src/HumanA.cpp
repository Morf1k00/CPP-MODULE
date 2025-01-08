/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:37:43 by rostik            #+#    #+#             */
/*   Updated: 2025/01/06 17:00:47 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string n, Weapon &w): _name(n), _weapons(w) {
    
}

HumanA::~HumanA(){

}

void HumanA::attack(){
    std::cout << _name << " attack with their " << _weapons.getType() << std::endl;
}

