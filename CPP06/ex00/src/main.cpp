/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:07:00 by rostik            #+#    #+#             */
/*   Updated: 2025/04/15 14:04:44 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ScalarConverter.hpp"

int main(int argc, char **argv) {

    if (argc == 2 && argv[1] != NULL)
        ScalarConverter::convert(argv[1]);
    else
        std::cout << "Wrong Format! Use ./ScalarConvert [value]";
    return (0);
}