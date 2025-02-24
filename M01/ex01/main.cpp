/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:06:53 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 21:13:38 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//=== main =====================================================================
int	main(void)
{
	Zombie	*zombies;
	int		i;
	
	zombies = zombieHorde(3, "OUSSAMA");
	if (!zombies)
		return (EXIT_FAILURE);
	i = -1;
	while (++i < 3)
		zombies[i].announce();
	delete[] zombies;
	return (EXIT_SUCCESS);
}
