/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 19:42:43 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	FragTrap	fragTrap("FragTrap");

	fragTrap.attack("enemy2");
	fragTrap.takeDamage(20);
	fragTrap.beRepaired(5);
	fragTrap.highFivesGuys();
	return (EXIT_SUCCESS);
}
