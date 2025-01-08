/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 15:19:46 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 14:08:42 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weap): _name(name), _w(weap){

}

HumanA::~HumanA(){

}

void HumanA::attack(){
    std::cout << _name << " attack with theirs " << _w.getType() << std::endl;
}
