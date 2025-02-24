/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:15:18 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/29 18:52:18 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Contact.hpp"

//=== Contact Default Constructor ==============================================
Contact::Contact()
{
}

//==== Contact Constructor =====================================================
Contact::Contact(std::string fN, std::string lN, std::string n, std::string pN, std::string dS)
{
	firstName = fN;
	lastName = lN;
	nickname = n;
	phoneNumber = pN;
	darkestSecret = dS;
}

//==== Contact Copy Constructor ================================================
Contact::Contact(const Contact& contact)
{
	(*this) = contact;
}

//==== Contact Copy Assignment Operator ========================================
Contact&	Contact::operator=(const Contact& contact)
{
	firstName = contact.firstName;
	lastName = contact.lastName;
	nickname = contact.nickname;
	phoneNumber = contact.phoneNumber;
	darkestSecret = contact.darkestSecret;
	return (*this);
}

//==== insertion operator ======================================================
std::ostream&	Contact::operator<<(std::ostream& out)
{
	out << FNAME << firstName << std::endl;
	out << LNAME << lastName << std::endl;
	out << NICKN << nickname << std::endl;
	out << PNBR << phoneNumber << std::endl;
	out << DARKSEC << darkestSecret << std::endl; 
	fflush(stdin);
	return (out);
}

//==== getFirstName ============================================================
std::string	Contact::getFirstName(void)
{
	return (firstName);
}

//==== getLastName =============================================================
std::string	Contact::getLastName(void)
{
	return (lastName);
}

//==== getNickname =============================================================
std::string	Contact::getNickname(void)
{
	return (nickname);
}

//==== getNickname =============================================================
std::string	Contact::getPhoneNumber(void)
{
	return (phoneNumber);
}

//==== getNickname =============================================================
std::string	Contact::getDarkestSecret(void)
{
	return (darkestSecret);
}

//==== Contact Destructor ======================================================
Contact::~Contact()
{
}
