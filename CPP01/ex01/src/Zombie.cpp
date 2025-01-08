/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:35:53 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 13:04:23 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(){
    
}

void Zombie::nameZombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie(){
        std::cout << this->_name  << " is destroyed." << std::endl;
}

void Zombie::announce() const{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}