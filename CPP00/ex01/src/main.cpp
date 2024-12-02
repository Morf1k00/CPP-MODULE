/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:04:29 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/02 18:00:25 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Phonebook.hpp"
#include "../inc/Contact.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;

	while(1)
	{
		std::cout << "Write command which you want use (ADD, SEARCH, EXIT) :  ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
		{
			std::cout << "Write index Contact(0 - 7) or ALL :  ";
			std::getline(std::cin, command);
			if (std::isdigit(command[0]) && command.length() == 1){
				int i = ::atoi(command.c_str());
				if (i >=0 && i < 8)
					phonebook.displayContact(i);
				else
					std::cout << "Invalid index! Pleaase write number between 0 and 7 or write correct ALL!" << std::endl; 
			}
			else if(command == "ALL")
				phonebook.displayAllContact();
		}
		else if (command == "EXIT"){
			std::cout << "PhoneBook is close!" << std::endl;
			break;
		}
		else	
			std::cout << "Invalid command! Please enter corect command!" << std::endl;
	}
	return(0);
}