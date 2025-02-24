/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:52:46 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 14:49:38 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie;

	zombie = newZombie("foo");
	if (!zombie)
		return (EXIT_FAILURE);
	zombie->announce();
	randomChump("buzz");
	delete zombie;
	return (EXIT_SUCCESS);
}
