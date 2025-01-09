/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rostik <rostik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:08:08 by rostik            #+#    #+#             */
/*   Updated: 2025/01/09 16:20:09 by rostik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

Harl::Harl(){

}

Harl::~Harl(){

}

void Harl::_debug(){
    std::cout<< "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::_info(){
    std::cout<< "[ INFO ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::_warning(){
    std::cout<< "[ WARNING]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::_error(){
    std::cout<< "[ ERROR ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
}

void Harl::filter(std::string level){

    void (Harl::*functions[])(void) = {
        &Harl::_debug,
        &Harl::_info,
        &Harl::_warning,
        &Harl::_error
    };
    int iLevel = -1;
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++){
        if (levels[i] == level){
            iLevel = i;
            break;
        }
    }

    if (iLevel == -1){
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }

    for (int i = iLevel; i < 4; i++){
        switch(iLevel){
            case 0:
                (this->*functions[iLevel])();
                iLevel++;
                break;
            case 1:
                (this->*functions[iLevel])();
                iLevel++;
                break;
            case 2:
                (this->*functions[iLevel])();
                iLevel++;
                break;
            case 3:
                (this->*functions[iLevel])();
                iLevel++;
                break;
        }
    }
}