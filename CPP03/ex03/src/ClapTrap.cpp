/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:21:38 by rostik            #+#    #+#             */
/*   Updated: 2025/01/15 14:21:42 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(){
    _name = "Default";
    _energyPoint = 10;
    _hitPoint = 10;
    _attackDamage = 0;
    std::cout << RD <<"ClapTrap created : "<< GR << _name<< RS << std::endl;
}

ClapTrap::ClapTrap(std::string const &name){
    _name = name;
    _energyPoint = 10;
    _hitPoint = 10;
    _attackDamage = 0;
    std::cout << RD << "ClapTrap with name : "<< GR << _name << YE << " created!"<< RS <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
    *this = copy;
    std::cout<< RD << "Copy constructor ClapTrap for "<< GR << _name<< YE << " called!"<< RS <<std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy){
    _name = copy._name;
    _hitPoint = copy._hitPoint;
    _energyPoint = copy._energyPoint;
    _attackDamage = copy._attackDamage;
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout<< RD << "ClapTrap destructor for "<< GR << _name << YE << " called!"<< RS << std::endl;
}

void ClapTrap::attack(const std::string& target){
    if (_energyPoint > 0 && _hitPoint > 0){
        _energyPoint--;
        std::cout<< RD << "ClapTrap "<< GR << _name<< YE << " attack " << BL << target << YE <<
            ", causing " << MG <<_attackDamage << YE << " point of damage!"<< RS << std::endl;
    }
    else if (_hitPoint <= 0)
        std::cout<< RD << "ClapTrap "<< GR << _name<< YE << "has no hit point and DIED!" << RS << std::endl;
    else if (_energyPoint <= 0)
        std::cout<< RD << "ClapTrap "<< GR << _name<< YE << "has no energy! His energy point = 0" << RS << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (_hitPoint > 0){
        _hitPoint -= amount;
        std::cout<< RD << "ClapTrap "<< GR << _name<< YE << " took " << MG << amount << YE << " damage!" << RS << std::endl;
    }
    else
        std::cout<< RD << "ClapTrap "<< GR << _name << YE << " already DIED!" << RS << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if (_energyPoint > 0 && _hitPoint > 0){
        _energyPoint--;
        _hitPoint += amount;
        std::cout<< RD << "ClapTrap "<< GR << _name<< YE << " repeirs " << MG << amount<< YE << " Hit Point!" << RS << std::endl;
        std::cout<< RD << "ClapTrap "<< GR << _name<< YE << " has " << MG << _hitPoint << YE << " Hit Point!" << RS <<std::endl;
    }
    else
        std::cout<< RD << "ClapTrap "<< GR << _name<< YE << " has no energy!" << RS << std::endl;
}