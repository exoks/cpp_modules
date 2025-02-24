/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:37:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 20:47:02 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//==== Cure Default Constructor =================================================
Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure Constructor Called" << std::endl;
}

//==== Cure Copy Constructor ====================================================
Cure::Cure(const Cure& cure)
{
	*this = cure;
}

//==== Cure Destructor ==========================================================
Cure::~Cure()
{
	std::cout << "Cure Destructor Called" << std::endl;
}

//==== Cure Copy Assignment Operator ============================================
Cure&	Cure::operator= (const Cure& cure)
{
	type = cure.type;
	return (*this);
}

//==== Cure Clone Overrideing ===================================================
Cure		*Cure::clone(void) const
{
	return (new Cure(*this));
}

//==== user ====================================================================
void	Cure::use(ICharacter& target)
{
	std::cout	<< "* heals "
				<< target.getName()
				<< "'s woundes *"
				<< std::endl;
}
