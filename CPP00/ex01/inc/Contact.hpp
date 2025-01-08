/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:00:48 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/05 14:15:03 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

#define RED 	"\033[1m\033[31m"
#define GREEN 	"\033[1m\033[32m"
#define WHITE	"\033[1m\033[38;5;15m"
#define BLUE 	"\033[1m\033[34m"
#define ORANGE 	"\033[1m\033[38;5;214m"
#define MINT 	"\033[1m\033[38;5;122m"
#define RESET 	"\033[0m"

class Contact
{
	private:
		std::string m_firstname;
		std::string m_lastname;
		std::string m_nickname;
		std::string m_phonenumber;
		std::string m_darknestsecret;
	
	public:
		Contact();
		Contact(const std::string firstname, const std::string lastname, const std::string nickname, const std::string phonenumber, const std::string darknestsecret);
		~Contact();
		void displayContact(int index)const;
		void displayFull()const;
};

#endif