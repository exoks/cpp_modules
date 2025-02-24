/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 15:10:57 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 22:01:42 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

//=== zombieHorde ==============================================================
Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies;

	zombies = new Zombie[N];
	if (!zombies)
		return (NULL);
	while (--N >= 0)
		zombies[N].set_name(name);
	return (zombies);
}
