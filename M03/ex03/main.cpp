/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:03:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 19:47:07 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include "DiamondTrap.hpp"

//=== main function ============================================================
int	main(void)
{
	DiamondTrap	diamondTrap("diamond player");

	diamondTrap.attack("enemy");
	diamondTrap.whoAmI();
	return (EXIT_SUCCESS);
}
