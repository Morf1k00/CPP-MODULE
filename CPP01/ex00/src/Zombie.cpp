/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:51:40 by rkrechun          #+#    #+#             */
/*   Updated: 2025/01/06 11:51:41 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie::Zombie(std::string name){
    this->_name = name;
}

Zombie::~Zombie(){
        std::cout << "Zombie " << _name << " is destroyed." << std::endl;
}

void Zombie::announce() const{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}