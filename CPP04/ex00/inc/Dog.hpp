/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:19:48 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 14:20:12 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"

class Dog : public Animal{
    public:
        Dog();
        ~Dog();
    public:
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        void makeSound() const;
};



#endif