/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 11:51:47 by rkrechun          #+#    #+#             */
/*   Updated: 2025/01/06 11:51:48 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

    private:
        std::string _name;

    public:
        Zombie(std::string _name);
        ~Zombie();
        void announce() const;
};

Zombie *newZombie(std:: string name);
void randomChump(std::string name);

#endif