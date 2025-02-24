/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:06:19 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 14:49:01 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//=== HumanA Constructor =======================================================
HumanA::HumanA(std::string name, Weapon	&weapon) : name(name), weapon(weapon)
{
}

//=== attack ===================================================================
void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
