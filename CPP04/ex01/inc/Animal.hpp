/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:34:34 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 17:54:54 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#define GR "\033[1;32m" // Green color
#define YE "\033[1;33m" // Yellow color
#define RD "\033[1m\033[38;5;196m" // Red color
#define BL "\033[1;34m" //Blue color
#define MG "\033[1;35m" //Magenta color
#define RS "\033[0m" // Reset color
#define CY "\033[1;36m" // Cyan color
#define OR "\033[1;38;5;202m" // Orange color
#define PK "\033[1;38;5;213m" // Pink color


class Animal{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();
    public:
        virtual void makeSound() const;
        std::string getType() const;
};

#endif