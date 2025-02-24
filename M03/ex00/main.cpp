/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 17:43:30 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ClapTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	ClapTrap	c("player");

	c.attack("enemy1");
	c.takeDamage(5);
	c.beRepaired(30);
	c.takeDamage(35);
	c.attack("enemy2");
	c.beRepaired(10);
	return (EXIT_SUCCESS);
}
