/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:20:42 by rostik            #+#    #+#             */
/*   Updated: 2025/04/23 12:32:09 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"


int main(int arc, char **argv){
    if (arc != 2){
        std::cout << "Wrong calling function! Write correct like this :" << std::endl;
        std::cout << "-------------------------------------------------" << std::endl;
        std::cout << "              ./btc [filename]" << std::endl;
        std::cout << "-------------------------------------------------" << std::endl;
    }
    else{
        BitcoinExchange data;
        try {
            data.fillMapDate();
        }
        catch (const std::exception& e){
            std::cerr << e.what() << std::endl;
            return 0;
        }
        try{
            data.findDate(argv[1]);
        }
        catch (const std::exception& e){
            std::cerr << e.what() << std::endl;
            return 0;
        }
    }
}
