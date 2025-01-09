/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:19:56 by rostik            #+#    #+#             */
/*   Updated: 2025/01/09 13:23:54 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(int argc, char **argv){
    if (argc != 2){
        std::cout << "Wrong number arrgumnet!" << std::endl << "Usage: ./harlFilter <level>" << std::endl;
        return 0;
    }    
    Harl harlFilter;
    harlFilter.filter(argv[1]);

    return 0;

}