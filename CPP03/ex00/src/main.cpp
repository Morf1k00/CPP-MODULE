/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 14:38:12 by rostik            #+#    #+#             */
/*   Updated: 2025/01/14 15:39:27 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(){
    ClapTrap robot1("42 robot");
    ClapTrap robot2(robot1);
    ClapTrap robot3;

    std::cout<< std::endl;
    robot1.attack("enemy");
    robot1.takeDamage(5);
    robot1.beRepaired(3);

    std::cout<< std::endl;
    robot2.attack("another enemy");
    robot2.takeDamage(15);
    robot2.beRepaired(10);

    std::cout<< std::endl;
    robot3.attack("second another enemy");
    robot3.takeDamage(8);
    robot3.beRepaired(4);

    std::cout<< std::endl;
    return 0;
}