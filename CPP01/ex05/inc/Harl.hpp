/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:21:57 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 18:32:41 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl{
    private:
        void _debug();
        void _info();
        void _warning();
        void _error();
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
};

#endif