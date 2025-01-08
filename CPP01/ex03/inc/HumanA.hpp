/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 15:37:36 by rostik            #+#    #+#             */
/*   Updated: 2025/01/06 17:00:37 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
    private:
        std::string _name;
        Weapon &_weapons;
    public:
        HumanA(std::string n, Weapon &w);
        ~HumanA();
        void attack();
};

#endif