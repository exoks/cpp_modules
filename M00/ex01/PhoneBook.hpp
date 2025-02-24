/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:39:09 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 16:12:37 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>

# define PHONEBOOK_PROMPT	"PhoneBook ~(ADD|SEARCH|EXIT)> "
# define INVALID_CMD		">>>> Invalid Command."
# define ADDING_CONTACT		"==============|Adding Contact|=============="
# define CONTACT_ADDED		"==========|Contact Has Been Added|=========="
# define CONTACTS_INFO		"INDEX     |FIRSTNAME |LASTNAME  |NICKNAME  |"
# define NO_CONTACT			"  > phoneBook: No Contacts Found."

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
	
	public:
		PhoneBook();
		void	addContact(void);
		void	displayContactsInfos(void);
		void	searchContact(void);
};

#endif
