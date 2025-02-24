/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:55:59 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 18:59:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

//=== ClapTrap Default Constructor =============================================
ClapTrap::ClapTrap() : hitPts(10), energyPts(10), damagePts(0)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

//=== ClapTrap Constructor =====================================================
ClapTrap::ClapTrap(std::string name) : hitPts(10), energyPts(10), damagePts(0)
{
	std::cout << "ClapTrap Constructor Called" << std::endl;
	this->name = name;
}

//=== ClapTrap Copy Constructor ================================================
ClapTrap::ClapTrap(const ClapTrap& clapTrap)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	(*this) = clapTrap;
}

//=== ClapTrap Destructor ======================================================
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor Called" << std::endl;
}

//=== Copy Assignment operator =================================================
ClapTrap&	ClapTrap::operator=(const ClapTrap clapTrap)
{
	name = clapTrap.name;
	hitPts = clapTrap.hitPts;
	energyPts = clapTrap.energyPts;
	damagePts = clapTrap.damagePts;
	return (*this);
}

//=== attack ===================================================================
void	ClapTrap::attack(const std::string& target)
{
	if (hitPts > 0 && energyPts > 0)
	{
		std::cout	<< "ClapTrap "
					<< name			<< " attacks "
					<< target		<< " causing "
					<< damagePts	<< std::endl;
		energyPts--;
	}
}

//=== takeDamage ===============================================================
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPts > 0)
	{
		std::cout	<< name		<< " taking "
					<< amount	<< " points of damage"
					<< std::endl;
		hitPts -= amount;
	}
}

//=== beRepaired ===============================================================
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPts > 0 && energyPts > 0)
	{
		std::cout	<< name		<< " gets "
					<< amount	<< " hit points back"
					<< std::endl;
		hitPts += amount;
		energyPts--;
	}
}
