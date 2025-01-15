/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 16:44:27 by rostik            #+#    #+#             */
/*   Updated: 2025/01/15 13:38:56 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/FragTrap.hpp"

int main(){
    FragTrap rob;
    FragTrap frag("lols");
    FragTrap agent(frag);
    
    rob.attack("enemy №78");
    rob.takeDamage(78);
    rob.beRepaired(56);
    rob.highFiveGuys();

    frag.attack("the same enemy");
    frag.takeDamage(10);
    frag.beRepaired(22);
    frag.highFiveGuys();

    agent.attack("agent Smith");
    agent.takeDamage(27);
    agent.beRepaired(1);
    agent.highFiveGuys();

    return 0;

}