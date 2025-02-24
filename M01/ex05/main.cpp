/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:54:31 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/29 16:33:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

bool	isValidCmd(char **av);
void	displayProgramMan(void);

//==== Main Function ===========================================================
int	main(int ac , char **av)
{
	Harl		harl;

	if (ac != 2 || !isValidCmd(++av))
		return (displayProgramMan(), EXIT_FAILURE);
	harl.complain(*av);
	return (EXIT_SUCCESS);
}

//==== isValidCmd ==============================================================
bool	isValidCmd(char **av)
{
	std::string	argv(*av);

	if (!argv.compare("DEBUG") || !argv.compare("INFO")
		|| !argv.compare("ERROR") || !argv.compare("WARNING"))
		return (true);
	return (false);
}

//=== displayProgramMan ========================================================
void	displayProgramMan(void)
{
	std::cout << "./Harl [CMD] |CMDS: DEBUG, INFO, ERROR, WARNING.\n";
}
