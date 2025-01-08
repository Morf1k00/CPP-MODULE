/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:21:59 by rostik            #+#    #+#             */
/*   Updated: 2025/01/08 18:57:30 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){
    
}

void Harl::complain(std::string level){

    void (Harl::*functions[])(void) = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error
    };
    std::string levels[] = {
        "DEBUG", "INFO", "WARNING","ERROR"
    };

    for (int i = 0; i < 4; i++){
        if (levels[i]==level){
           (this->*functions[i])();
            return;
        }
    }
    std::cout << "Unknown level " << level << std::endl;
}

void Harl::_debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
 << std::endl;
}

void Harl::_info(){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

