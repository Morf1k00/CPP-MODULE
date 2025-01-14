/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:57:22 by rostik            #+#    #+#             */
/*   Updated: 2025/01/14 16:31:59 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(){
    _name = "ST Default";
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(std::string const &name){
    _name = name;
    _energyPoint = 100;
    _hitPoint = 50;
    _attackDamage = 20;
    std::cout << RD << "ScavTrap with name : "<< GR << _name << YE << " created!"<< RS <<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy){
    *this = copy;
    std::cout<< RD << "Copy constructor ScavTrap for "<< GR << _name<< YE << " called!"<< RS <<std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy){
    _name = copy._name;
    _hitPoint = copy._hitPoint;
    _energyPoint = copy._energyPoint;
    _attackDamage = copy._attackDamage;
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout<< RD << "ScavTrap destructor for "<< GR << _name << YE << " called!"<< RS << std::endl;
}

void ScavTrap::attack(const std::string &target){
    if (_energyPoint > 0 && _hitPoint > 0){
        _energyPoint--;
        std::cout<< RD << "ScavTrap "<< GR << _name<< YE << " attack " << BL << target << YE <<
            ", causing " << MG <<_attackDamage << YE << " point of damage!"<< RS << std::endl;
    }
    else if (_hitPoint <= 0)
        std::cout<< RD << "ScavTrap "<< GR << _name<< YE << "has no hit point and DIED!" << RS << std::endl;
    else if (_energyPoint <= 0)
        std::cout<< RD << "ScavTrap "<< GR << _name<< YE << "has no energy! His energy point = 0" << RS << std::endl;

}

void ScavTrap::guardGate(){
    std::cout << RD << "ScavTrap with name "<< GR << _name << YE << " is now in Gate kepper mode!" << RS << std::endl;
}

