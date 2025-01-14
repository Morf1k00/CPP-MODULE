/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:38:12 by rostik            #+#    #+#             */
/*   Updated: 2025/01/14 14:40:52 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(){
    ClapTrap robot1("42 robot");
    ClapTrap robot2(robot1);

    robot1.attack("enemy");
    robot1.takeDamage(5);
    robot1.beRepaired(3);

    robot2.attack("another enemy");
    robot2.takeDamage(15);
    robot2.beRepaired(10);

    return 0;
    
}