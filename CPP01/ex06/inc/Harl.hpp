/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:04:33 by rostik            #+#    #+#             */
/*   Updated: 2025/01/09 13:08:37 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
#define HARLFILTER_HPP

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
        void filter(std::string level);
};


#endif