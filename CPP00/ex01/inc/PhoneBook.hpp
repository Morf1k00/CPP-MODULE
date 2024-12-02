/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:47:53 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/02 19:17:59 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

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