/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:51:33 by rkrechun          #+#    #+#             */
/*   Updated: 2025/01/06 11:51:34 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main() {
    Zombie stackZombie("stackZombie");
    Zombie *heapZombie;

    stackZombie.announce();
    heapZombie = newZombie("heapZombie");
    heapZombie->announce();
    randomChump("randomZombie");
    delete heapZombie;

    return 0;
}