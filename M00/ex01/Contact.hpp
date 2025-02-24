/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:17:31 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 15:37:25 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

# define FNAME				"First Name     : "
# define LNAME				"Last Name      : "
# define NICKN				"Nickname       : "
# define PNBR				"Phone Number   : "
# define DARKSEC			"Darkest Secret : "

class	Contact
{
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;
	
	public:
		Contact();
		Contact(const Contact& contact);
		Contact(std::string fN,std::string lN, std::string n, std::string pN, std::string dS);
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getPhoneNumber(void);
		std::string		getDarkestSecret(void);
		Contact&		operator=(const Contact& contact);
		std::ostream&	operator<< (std::ostream& out);
		~Contact();
};

#endif
