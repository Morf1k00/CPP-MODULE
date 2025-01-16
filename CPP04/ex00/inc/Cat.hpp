/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 13:19:46 by rostik            #+#    #+#             */
/*   Updated: 2025/01/16 14:14:25 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal{
    public:
        Cat();
        ~Cat();
    public:
        void makeSound() const;
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
};

#endif