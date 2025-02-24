/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:47:36 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 16:15:52 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PhoneBook.hpp"

//==== PhoneBook Default Constructor ===========================================
PhoneBook::PhoneBook() : index(-1)
{
}

//==== addContact ==============================================================
void	PhoneBook::addContact(void)
{
	std::string	prompts[5] = {FNAME, LNAME, NICKN, PNBR, DARKSEC};
	std::string	attr[5];
	int			i;

	std::cout << std::endl << ADDING_CONTACT << std::endl;
	i = 0;
	while (i < 5)
	{
		std::cout << std::setw(20) << prompts[i];
		getline(std::cin, attr[i]);
		if (std::cin.eof())
			return ;
		i += (attr[i].length() > 0);
	}
	contacts[++index % 8] = Contact(attr[0], attr[1], attr[2], attr[3], attr[4]);
	std::cout << CONTACT_ADDED << std::endl;
}

//==== displayContactsInfos ====================================================
void	PhoneBook::displayContactsInfos(void)
{
	std::string	attr[4];
	int			i, j, k;

	k = index * (index < 8) + 7 *  (index >= 8);
	std::cout << std::endl << CONTACTS_INFO << std::endl;
	i = -1;
	while (++i <= k)
	{
		attr[0] = i + '0'; 
		attr[1] = contacts[i].getFirstName().substr(0, 10);
		attr[2] = contacts[i].getLastName().substr(0, 10);
		attr[3] = contacts[i].getNickname().substr(0, 10);
		j = -1;
		while (++j < 4)
		{
			if (attr[j].length() >= 10)
				attr[j].replace(9, 1, ".");
			std::cout << std::left << std::setw(10) << attr[j] << "|"; 
		}
		std::cout << std::endl;
	}
	fflush(stdin);
}

//==== searchContact ===========================================================
void	PhoneBook::searchContact(void)
{
	std::string	str_cIndex;
	int			cIndex;

	if (index == -1)
		std::cout << std::endl << NO_CONTACT << std::endl;
	while(index > -1 && !std::cin.eof())
	{
		displayContactsInfos();
		std::cout << std::endl << "Enter Contact's Index : ";
		std::cin >> str_cIndex;
		cIndex = atoi(str_cIndex.c_str());
		if (cIndex < 0 || cIndex > (index * (index < 8) + 7 * (index >= 8)))
			continue ;
		contacts[cIndex] << std::cout;
		return ;
	}
}
