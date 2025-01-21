/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:34:43 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 16:56:13 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain* _brain;
    public:
        Cat();
        ~Cat();
    public:
        void makeSound() const;
        Cat(const Cat &copy);
        Cat &operator=(const Cat &copy);
};

#endif