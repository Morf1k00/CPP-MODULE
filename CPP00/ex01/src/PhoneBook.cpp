/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:33:20 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/03 14:52:45 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook :: PhoneBook() : contactCount(0){
		
}

PhoneBook::~PhoneBook(){
	
}

void PhoneBook :: addContact()
{
	std::string name;
	std::string surname;
	std::string nick;
	std::string phone;
	std::string secret;
	
	std::cout << "Write first name :  ";
	std::getline(std::cin, name);
	std::cout << "Write last name :  ";
	std::getline(std::cin, surname);
	std::cout << "Write nickname :  ";
	std::getline(std::cin, nick);
	std::cout << "Write phonenumber :  ";
	std::getline(std::cin, phone);
	std::cout << "Write darkest Secret :  ";
	std::getline(std::cin, secret);
	
	Contact newContact(name, surname, nick, phone, secret);
	if (contactCount < 8){
		m_contacts[contactCount]= newContact;
		contactCount++;
	}
	else{
		for (int i = 0; i < 7; i++)
			m_contacts[i] = m_contacts[i+1];
		m_contacts[7] = newContact;
	}
	std:: cout << "Contact added succesfully!"<< std::endl;
}

void PhoneBook :: displayAllContact()const
{
	std::cout << std::right <<std ::setw(10) << "INDEX" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "--------------------------------------------"<< std::endl;
	if (contactCount != 0){
		for (int i = 0; i < contactCount; i++){
			m_contacts[i].displayContact(i);
			std::cout << "--------------------------------------------"<< std::endl;
		}	
	}
	else
		std::cout << "PhoneBook is empty" << std::endl;
}

void PhoneBook :: displayContact(int index)const
{
	if (index < 0 || index >= contactCount)
	{
		std::cout << "invalid index!" << std::endl;
		return;
	}
	m_contacts[index].displayFull();
}