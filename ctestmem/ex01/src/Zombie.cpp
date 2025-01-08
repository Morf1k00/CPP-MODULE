/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:04:18 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 13:31:54 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie ::Zombie(){

}

Zombie::~Zombie(){
    std::cout << this->_name << " is destroyed!" << std::endl;
}



void Zombie:: nameZombie(std::string name){
    this->_name = name;
}

void Zombie::announce(){
    std::cout << _name << " : Braiiiiiinnnzz..." << std::endl;
}