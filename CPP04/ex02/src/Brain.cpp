/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:45:21 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 17:55:21 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain:: Brain(){
    std::cout << PK  "Brain constructor called!"  RS << std::endl;
}

Brain::~Brain(){
    std::cout << PK "Brain destructor called!" RS << std::endl;
}

Brain &Brain::operator=(const Brain &copy){
    std::cout << PK "Brain copy assignment called!" RS << std::endl;
    for (int i= 0; i < 100; i++){
        _ideas[i] = copy._ideas[i];
    }
    return *this;
}

Brain::Brain(const Brain &copy){
    std::cout << PK "Brain copy constructor called!" RS<< std::endl;
    for (int i; i < 100; i++){
        this->_ideas[i] = copy._ideas[i];
    }
}