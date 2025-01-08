/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 12:39:59 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 13:22:17 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(){
    Zombie rand("ZOMB");
    Zombie *stack;

    rand.announce();
    stack = newZombie("z");
    stack->announce();
    randomChump("ZOV");
    delete stack;

    return(0);

}