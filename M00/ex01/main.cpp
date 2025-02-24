/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 22:29:31 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 15:36:15 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phoneBook;
	std::string	line;

	while(!std::cin.eof())
	{
		std::cout << std::endl << PHONEBOOK_PROMPT;
		getline(std::cin, line);
		if (line == "ADD")
			phoneBook.addContact();
		else if (line == "SEARCH")
			phoneBook.searchContact();
		else if (line == "EXIT" || std::cin.eof())
			break ;
		else
			std::cout << "PhoneBook: " << INVALID_CMD << std::endl;
	}
	return (EXIT_SUCCESS);
}
