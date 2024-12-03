/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:33:20 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/03 16:28:07 by rkrechun         ###   ########.fr       */
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
		std::cout << "Write first name :  ";
		std::getline(std::cin, name);
		if (!isAlpha(name))
			std::cout << "Name should contain aplhabetic character or only spaces!"<< std::endl;
		else if (name.empty())
			std::cout << "Name cannot be empty!"<< std::endl;
	}while(!isAlpha(name) || name.empty());
	do{
		std::cout << "Write last name :  ";
		std::getline(std::cin, surname);
		if (!isAlpha(surname))
			std::cout << "Surname should contain aplhabetic character or only spaces!"<< std::endl;
		else if (surname.empty())
			std::cout << "Surname cannot be empty!"<< std::endl;
	}while(!isAlpha(surname) || surname.empty());
	do{
		std::cout << "Write nickname :  ";
		std::getline(std::cin, nick);
		if (!isAlpha(nick))
			std::cout << "Nickname should contain aplhabetic character or only spaces!"<< std::endl;
		else if (nick.empty())
			std::cout << "Nickname cannot be empty!"<< std::endl;
	}while(!isAlpha(nick) || nick.empty());
	do{
		std::cout << "Write phonenumber :  ";
		std::getline(std::cin, phone);
		if (!isNum(phone))
			std::cout << "Phonenumber should contain numeric character or only spaces!"<< std::endl;
		else if (phone.empty())
			std::cout << "Phonenumber cannot be empty!"<< std::endl;
	}while(!isNum(phone) || phone.empty());
	do{
		std::cout << "Write darkest Secret :  ";
		std::getline(std::cin, secret);
		if (secret.empty())
			std::cout << "Darknest Secret cannot be empty!" << std::endl;
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