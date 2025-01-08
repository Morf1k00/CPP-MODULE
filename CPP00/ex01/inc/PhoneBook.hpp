/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:47:53 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/04 13:36:10 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

// #define RED \033[1m\033[31m
// #define GREEN \033[1m\033[32m
// #define BLUE \033[1m\033[34m
// #define ORANGE \033[1m\033[38;5;214m
// #define MINT \033[1m\033[38;5;122m
// #define RESET \033[0m

#include <iostream>
#include "Contact.hpp"
#include "iomanip"

class PhoneBook
{
	private:
		Contact m_contacts[8];
		int	contactCount;
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void displayAllContact()const;
		void displayContact(int index)const;
		void addContactLess8();
		void addContactBigger8();
};

#endif