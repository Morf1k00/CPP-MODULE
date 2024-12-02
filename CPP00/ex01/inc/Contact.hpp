/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkrechun <rkrechun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:00:48 by rkrechun          #+#    #+#             */
/*   Updated: 2024/12/02 18:01:05 by rkrechun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

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