/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 13:34:44 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 13:04:14 by rostik           ###   ########.fr       */
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
        Zombie();
        Zombie(std::string _name);
        ~Zombie();
        void announce() const;
        void nameZombie(std::string nameZombie);
};

Zombie *zombieHorde(int N, std::string name);

#endif