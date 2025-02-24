/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:55:06 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 22:12:28 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//=== Weapon Default Constructor ===============================================
Weapon::Weapon()
{
}

//=== Weapon Constructor 1 =====================================================
Weapon::Weapon(std::string type)
{
	this->type = type;
}

//=== getType ==================================================================
std::string	Weapon::getType(void)
{
	return (type);
}

//=== setType ==================================================================
void	Weapon::setType(std::string type)
{
	this->type = type;
}
