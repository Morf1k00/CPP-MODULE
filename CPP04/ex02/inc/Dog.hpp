/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:34:53 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 18:15:01 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain* _brain;
    public:
        Dog();
        ~Dog();
    public:
        Dog(const Dog &copy);
        Dog &operator=(const Dog &copy);
        void makeSound() const ;
};

#endif