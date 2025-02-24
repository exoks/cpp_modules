/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:54:31 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 15:10:32 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		isValidCmd(char **av);
void	displayProgramMan(void);

//=== main =====================================================================
int	main(int ac , char **av)
{
	Harl		harl;

	if (ac != 2 || !isValidCmd(++av))
		return (displayProgramMan(), EXIT_FAILURE);
	harl.complain(*av);
	return (EXIT_SUCCESS);
}

//=== isValidCmd ===============================================================
int	isValidCmd(char **av)
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
	std::cout	<< "[ Probably complaining about insignificant problems ]"
				<< std::endl
				<< "./Harl [CMD] |cmds: DEBUG, INFO, ERROR, WARNING."
				<< std::endl;
}
