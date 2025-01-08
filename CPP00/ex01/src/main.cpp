/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:04:29 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/05 14:18:00 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"
#include "../inc/Contact.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;

	while(1)
	{
		std::cout << WHITE "Write command which you want use ("<< GREEN "ADD, SEARCH, EXIT" WHITE<< ") :  " RESET;
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
		{
			std::cout << WHITE "Write index Contact " << ORANGE << "(0 - 7) " WHITE << "or "<<  GREEN "ALL" WHITE << ":  " RESET;
			std::getline(std::cin, command);
			if (std::isdigit(command[0]) && command.length() == 1){
				int i = ::atoi(command.c_str());
				if (i >= 0 && i < 8)
					phonebook.displayContact(i);
				else
					std::cout << RED "Invalid index! Pleaase write number between " ORANGE "0 and 7 " RED "or "  "write correct " GREEN "ALL!" RESET<< std::endl; 
			}
			else if(command == "ALL")
				phonebook.displayAllContact();
			else
				std::cout << RED "Invalid index! Pleaase write number between " ORANGE "0 and 7 " RED "or "  "write correct " GREEN "ALL!" RESET<< std::endl; 
		}
		else if (command == "EXIT"){
			std::cout << ORANGE "PhoneBook is close!" RESET << std::endl;
			break;
		}
		else	
			std::cout << RED"Invalid command! Please enter corect command!" RESET<< std::endl;
	}
	return(0);
}