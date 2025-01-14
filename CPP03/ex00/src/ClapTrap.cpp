/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:11:59 by rostik            #+#    #+#             */
/*   Updated: 2025/01/14 14:37:12 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(){
    _name = "Default";
    _energyPoint = 10;
    _hitPoint = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap created : " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string const &name){
    _name = name;
    _energyPoint = 10;
    _hitPoint = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap with name : " << _name << "created!" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    *this = copy;
    std::cout << "Copy constructor for " << _name << "called!" <<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    _name = copy._name;
    _hitPoint = copy._hitPoint;
    _energyPoint = copy._energyPoint;
    _attackDamage = copy._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor for " << _name << "called!" << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (_energyPoint > 0 && _hitPoint > 0){
        _energyPoint--;
        std::cout << "ClapTrap " << _name << " attack "<< target <<
             ", causing " << _attackDamage << " point of damage!" << std::endl;
    }
    else if (_hitPoint <= 0)
        std::cout << "ClapTrap " << _name << "has no hit point and DIED!" << std::endl;
    else if (_energyPoint <= 0)
        std::cout << "ClapTrap " << _name << "has no energy! His energy point = 0"<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoint > 0){
        _hitPoint -= amount;
        std::cout << "ClapTrap " << _name << " took " << amount << "damage!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name<< " already DIED!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_energyPoint > 0 && _hitPoint > 0){
        _energyPoint--;
        _hitPoint += amount;
        std::cout << "ClapTrap " << _name << " repeirs " << amount << std::endl;
        std::cout << "ClapTrap " << _name<< " has " << _hitPoint <<std::endl;
    }
    else
        std::cout << "ClapTrap "<< _name << " has no energy!" << std::endl;
}