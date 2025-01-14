/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 15:57:20 by rostik            #+#    #+#             */
/*   Updated: 2025/01/14 16:39:41 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScavTrap.hpp"

int main(){
    ScavTrap scav1("Scavyyyy");

    scav1.attack("enemy");
    scav1.guardGate();

    ScavTrap scav2 = scav1;
    scav2.attack("another enemy");
    scav2.takeDamage(75);
    scav2.beRepaired(33);
    
    return 0;
}