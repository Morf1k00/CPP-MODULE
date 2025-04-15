/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:19:20 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 14:04:09 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <iostream>
# include <string>
#include <sstream> 

class ScalarConverter{
    public:
        static void convert(const std::string &liter);
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter &other);
        ScalarConverter &operator=(ScalarConverter &other);
};


#endif