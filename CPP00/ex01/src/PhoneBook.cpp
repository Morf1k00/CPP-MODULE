/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:33:20 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/04 13:33:55 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook :: PhoneBook() : contactCount(0){
		
}

PhoneBook::~PhoneBook(){
	
}

bool isAlpha(const std::string str){
	for (size_t i = 0; i < str.size(); i++){
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return(false);
	}
	return(true);
}

bool isNum(const std::string str){
	for (size_t i = 0; i < str.size(); i++){
		if (str[i] < '0' || str[i] > '9')
			return(false);
	}
	return(true);
}

bool isSpace(const std::string str){
	for(size_t i = 0; i < str.size(); i++){
		if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			return(false);
	}
	return(true);
}

void PhoneBook :: addContact()
{
	std::string name;
	std::string surname;
	std::string nick;
	std::string phone;
	std::string secret;
	do{
		std::cout << BLUE "Write first name :  " RESET;
		std::getline(std::cin, name);
		if (!isAlpha(name))
			std::cout << RED "Name should contain aplhabetic character or only spaces!" RESET << std::endl;
		else if (name.empty())
			std::cout << RED "Name cannot be empty!" RESET<< std::endl;
	}while(!isAlpha(name) || name.empty());
	do{
		std::cout << BLUE "Write last name :  " RESET;
		std::getline(std::cin, surname);
		if (!isAlpha(surname))
			std::cout << RED "Surname should contain aplhabetic character or only spaces!" RESET << std::endl;
		else if (surname.empty())
			std::cout << RED "Surname cannot be empty!" RESET << std::endl;
	}while(!isAlpha(surname) || surname.empty());
	do{
		std::cout << BLUE "Write nickname :  " RESET;
		std::getline(std::cin, nick);
		if (!isAlpha(nick))
			std::cout << RED "Nickname should contain aplhabetic character or only spaces!"<< std::endl;
		else if (nick.empty())
			std::cout << RED "Nickname cannot be empty!" RESET << std::endl;
	}while(!isAlpha(nick) || nick.empty());
	do{
		std::cout << BLUE "Write phonenumber :  " RESET;
		std::getline(std::cin, phone);
		if (!isNum(phone))
			std::cout << RED "Phonenumber should contain numeric character or only spaces!"<< std::endl;
		else if (phone.empty())
			std::cout << RED "Phonenumber cannot be empty!" RESET << std::endl;
	}while(!isNum(phone) || phone.empty());
	do{
		std::cout << BLUE "Write darkest Secret :  " RESET;
		std::getline(std::cin, secret);
		if (secret.empty())
			std::cout << RED "Darknest Secret cannot be empty!" RESET << std::endl;
	}while(secret.empty() || isSpace(secret));
	
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
	std:: cout << GREEN "Contact added succesfully!" RESET << std::endl;
}

void PhoneBook :: displayAllContact()const
{
	if (contactCount != 0){
		std::cout << std::right <<std ::setw(10) << "INDEX" << "|"
				<< std::setw(10) << "First Name" << "|"
				<< std::setw(10) << "Last Name" << "|"
				<< std::setw(10) << "Nickname" << "|" << std::endl;
		std::cout << "--------------------------------------------"<< std::endl;
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
		std::cout << RED "invalid index!" RESET << std::endl;
		return;
	}
	m_contacts[index].displayFull();
}