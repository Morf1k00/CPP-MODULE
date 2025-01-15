/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 14:20:56 by rostik            #+#    #+#             */
/*   Updated: 2025/01/15 15:17:57 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define GR "\033[1;32m" // Green color
#define YE "\033[1;33m" // Yellow color
#define RD "\033[1m\033[38;5;196m" // Red color
#define BL "\033[1;34m" //Blue color
#define MG "\033[1;35m" //Magenta color
#define RS "\033[0m" // Reset color

class ClapTrap{
    protected:
        std::string _name;
        int _hitPoint;
        int _energyPoint;
        int _attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string const &name);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif