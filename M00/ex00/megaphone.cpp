/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 19:45:42 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/29 18:51:41 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

int	main(int ac, char **av)
{
	std::string	reference("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

	if (ac == 1)
		std::cout << reference;
	while(ac > 1 && *(++av))
	{
		while (**av)
			std::cout << (char) toupper(*(*av)++);
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
