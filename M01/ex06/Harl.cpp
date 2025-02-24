/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:48:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 15:04:44 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Harl.hpp"

//=== dubag function ===========================================================
void	Harl::debug(void)
{
	std::cout	<< "[ DEBUG ]"
				<< std::endl
				<< "I love having extra bacon for my" 
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. "
				<< "I really do!"
				<< std::endl << std::endl;
}

//=== info function ============================================================
void	Harl::info(void)
{
	std::cout	<< "[ INFO ]"
				<< std::endl
				<< "I cannot believe adding extra bacon costs more money."
   				<< std::endl
				<< "You didn’t put enough bacon in my burger!"
				<< "If you did, I wouldn’t be asking for more!"
				<< std::endl << std::endl;
}

//=== info function ============================================================
void	Harl::warning(void)
{
	std::cout	<< "[ WARNING ]"
				<< std::endl
				<< "I think I deserve to have some extra bacon for free."
				<< std::endl
				<< "I’ve been coming for years whereas"
				<< "you started working here since last month."
				<< std::endl << std::endl;
}

//=== info function ============================================================
void	Harl::error(void)
{
	std::cout	<< "[ ERROR ]"
				<< std::endl
				<< "This is unacceptable! I want to speak to the manager now."
				<< std::endl << std::endl;
}

//=== complain function ========================================================
void	Harl::complain(std::string level)
{
	void	(Harl::*cmd[4])(void);
	int		index;

	cmd[0] = &Harl::debug;
	cmd[1] = &Harl::info;
	cmd[2] = &Harl::warning;
	cmd[3] = &Harl::error;
	index = abs((int) level.length() - 5) + 3 * (level.front() == 'E');
	switch (index)
	{
		case 0:
			  debug();
		case 1:
			  info();
		case 2:
			  warning();
		case 3:
			  error();
	}
}
