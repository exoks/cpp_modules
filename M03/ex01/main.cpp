/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 19:29:54 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "ScavTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	ScavTrap	scavTrap("scavPlayer");

	scavTrap.attack("enemy");
	scavTrap.takeDamage(5);
	std::cout << "HitPts => " << scavTrap.getHitPts() << std::endl;
	scavTrap.beRepaired(5);
	std::cout << "HitPts => " << scavTrap.getHitPts() << std::endl;
	scavTrap.guardGate();
	return (EXIT_SUCCESS);
}
