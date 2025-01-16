/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:33:07 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 16:32:06 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

#define GR "\033[1;32m" // Green color
#define YE "\033[1;33m" // Yellow color
#define RD "\033[1m\033[38;5;196m" // Red color
#define BL "\033[1;34m" //Blue color
#define MG "\033[1;35m" //Magenta color
#define RS "\033[0m" // Reset color

class WrongAnimal{
    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal &operator=(const WrongAnimal &copy);
        virtual ~WrongAnimal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif