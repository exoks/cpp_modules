/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:40:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 19:56:33 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "DiamondTrap.hpp"

//=== Diamond Default Constructor ==============================================
DiamondTrap::DiamondTrap()
{
	std::cout << "Diamond Default Constructor Called" << std::endl;
	setDamagePts(30);
}

//=== Diamond Constructor ======================================================
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "Diamond Constructor Called" << std::endl;
	this->name = name;
	setDamagePts(30);
}

//=== Diamond Copy Constructor =================================================
DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap)
{
	std::cout << "Diamond Copy Constructor" << std::endl;
	(*this) = diamondTrap;
}

//=== Diamond Copy Assignment Operator =========================================
DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	setName(diamondTrap.getName());
	setHitPts(diamondTrap.getHitPts());
	setEnergyPts(diamondTrap.getEnergyPts());
	setDamagePts(diamondTrap.getDamagePts());
	return (*this);
}

//=== Diamond Destructor =======================================================
DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond Constructor Called" << std::endl;
}

//=== WhoAmI ===================================================================
void	DiamondTrap::whoAmI(void)
{
	std::cout << "===================== (WhoAmI) =====================\n";
	std::cout << "Diamond Name  : " << name << std::endl;
	std::cout << "ClapTrap Name : " << getName() << std::endl;
	std::cout << "====================================================\n";
}
