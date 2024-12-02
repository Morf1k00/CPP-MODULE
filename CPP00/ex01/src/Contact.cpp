/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:00:30 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/02 17:58:26 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

Contact::Contact(const std::string firstname, const std::string lastname, const std::string nickname, const std::string phonenumber, const std::string darknestsecret) : m_firstname(firstname), m_lastname(lastname), m_nickname(nickname), m_phonenumber(phonenumber), m_darknestsecret(darknestsecret)
{
	
}

Contact::Contact(){
	
}

Contact::~Contact(){
	
}

std::string truncateString(const std:: string& text, size_t len)
{
	if (text.size() > len)
		return(text.substr(0, len - 3) + "...");
	return(text);
}

void Contact::displayContact(int index)const{

	std::cout << std::right << std::setw(10) << index << "|" << std::setw(10) 
			<< truncateString(m_firstname, 10) << "|"
			<< std::setw(10) << truncateString(m_lastname, 10) << "|"
			<< std::setw(10) << truncateString(m_nickname, 10) << "|"
			<< std::endl;
	
}

void Contact::displayFull()const{
	std::cout << "First name: " << m_firstname << std ::endl;
	std::cout << "Last name: " << m_lastname << std::endl;
	std::cout << "Nickname: " << m_nickname << std::endl;
	std::cout << "Phone number: " << m_phonenumber << std::endl;
	std::cout << "Darknest Secret: " << m_darknestsecret<< std:: endl;
}