/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:28:22 by rostik            #+#    #+#             */
/*   Updated: 2025/01/15 16:30:04 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    _hitPoint = FragTrap::_hitPoint;
    _energyPoint = ScavTrap::_energyPoint;
    _name = "DT Default";
    _attackDamage = FragTrap::_attackDamage;
    ClapTrap::_name = _name + "_clap_name";
    std::cout << "DiamondTrap default constructor called!" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name){
    _hitPoint = FragTrap::_hitPoint;
    _energyPoint = ScavTrap::_energyPoint;
    _name = name;
    _attackDamage = FragTrap::_attackDamage;
    ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
    this->_hitPoint= copy._hitPoint;
    this->_energyPoint = copy._energyPoint;
    this->_attackDamage = copy._attackDamage;
    std::cout << GR "DiamondTrap copy constructor called!" RS<< std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << RD "DiamondTrap destructor called for " MG << _name << RS<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy) {
   _name = copy._name;
   _hitPoint= copy._hitPoint;
   _energyPoint = copy._energyPoint;
   _attackDamage = copy._attackDamage;
   return *this;
}

void DiamondTrap::attack(const std::string &target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << GR "I am " << MG << _name << GR " and my ClapTrap name is " BL << ClapTrap::_name << RS<< std::endl;
}