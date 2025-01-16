/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:33:07 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 14:26:30 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iomanip>

class WrongAnimal{
    private:
        std::string _type;
    public:
        WrongAnimal();
        ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};

#endif