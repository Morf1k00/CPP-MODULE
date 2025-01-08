/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:40:05 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 13:18:39 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name){
    this->_name = name;
}

Zombie::~Zombie (){
    std::cout<< _name << " is destroyed!" << std::endl;
}

void Zombie:: announce(){
    std::cout << _name << ": Braiiiiiinnnzz..." << std::endl;
}