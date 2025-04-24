/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 10:42:39 by rostik            #+#    #+#             */
/*   Updated: 2025/04/24 12:23:21 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/RPN.hpp"


int main(int argc, char **argv){
    try {
        
        if (argc != 2)
            throw stringNotValid();
        
        RPN calc;
        int result = calc.trimString(argv[1]);
        std::cout << result << std::endl;
    }catch (std::exception &e){
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}