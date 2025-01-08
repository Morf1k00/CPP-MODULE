/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:37:38 by rostik            #+#    #+#             */
/*   Updated: 2025/01/07 15:05:04 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string _name;
        Weapon *_weapons;
    public:
        HumanB(std::string name);
        ~HumanB();
        void setWeapon(Weapon &w);
        void attack();
};

#endif