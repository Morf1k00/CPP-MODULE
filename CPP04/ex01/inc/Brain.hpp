/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:37:08 by rostik            #+#    #+#             */
/*   Updated: 2025/01/21 17:53:48 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>
#include <Animal.hpp>
// #define OR "\033[1;38;5;202m"

class Brain{
    private :
        std::string _ideas[100];
    public:
        Brain();
        Brain &operator=(const Brain &copy);
        Brain(const Brain &copy);
        ~Brain();
        // void setIdea(int index, const std::string& idea);
        // std::string getIdea(int index) const;
};

#endif