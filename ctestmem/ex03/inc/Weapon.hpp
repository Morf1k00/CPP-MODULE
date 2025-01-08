/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:46:38 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 14:08:03 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPONN_HPP
#define WEAPONN_HPP

#include <iostream>
#include <string>

class Weapon{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string getType() const;
        void setType(std::string type);
};

#endif