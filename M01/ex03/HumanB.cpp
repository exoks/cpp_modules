/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:16:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 22:16:46 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

//=== HumanB constructor =======================================================
HumanB::HumanB(std::string name)
{
	this->name = name;
}

//=== Weapon setter ============================================================
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

//=== attack ===================================================================
void	HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
