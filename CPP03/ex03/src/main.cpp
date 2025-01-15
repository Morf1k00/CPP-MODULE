/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 15:32:08 by rostik            #+#    #+#             */
/*   Updated: 2025/01/15 15:36:19 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/DiamondTrap.hpp"

int main(){
    DiamondTrap dt("new Trap");

    dt.attack("new enemy");
    dt.takeDamage(27);
    dt.beRepaired(45);
    dt.whoAmI();

    return 0;
}