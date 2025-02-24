/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:31:31 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 20:39:41 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//=== newZombie ================================================================
Zombie	*newZombie(std::string name)
{
	Zombie	*zombie;

	zombie = new Zombie(name);
	if (!zombie)
		return (NULL);
	return (zombie);
}
