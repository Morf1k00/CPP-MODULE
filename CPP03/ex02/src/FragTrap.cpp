/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:44:25 by rostik            #+#    #+#             */
/*   Updated: 2025/01/15 13:44:21 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(){
    _name = "FT Default";
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout<< MG << "Default constructor FragTrap called!" << std::endl;
}

FragTrap::FragTrap(std::string const &name){
    _name = name;
    _hitPoint = 100;
    _energyPoint = 100;
    _attackDamage = 30;
    std::cout << MG <<"FragTrap constructor for "<< GR << _name << YE << " called!"<< RS << std::endl; 
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy){
    this->_hitPoint = copy._hitPoint;
    this->_energyPoint = copy._energyPoint;
    this->_attackDamage = copy._attackDamage;
    std::cout << MG << "Copy constructor for " << GR << _name << YE << " called!" << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << MG << "FragTrap " << GR << _name << YE << " destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy){
    _name = copy._name;
    _hitPoint = copy._hitPoint;
    _energyPoint = copy._energyPoint;
    _attackDamage = copy._attackDamage;
    return *this;
}

void FragTrap::highFiveGuys(){
    std::cout << MG << "FragTrap " << GR << _name << YE << "  request a high five!" << std::endl;
}