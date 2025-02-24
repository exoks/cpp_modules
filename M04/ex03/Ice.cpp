/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:37:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 20:48:59 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//==== Ice Default Constructor =================================================
Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice Constructor Called" << std::endl;
}

//==== Ice Copy Constructor ====================================================
Ice::Ice(const Ice& ice)
{
	(*this) = ice;
}

//==== Ice Destructor ==========================================================
Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}

//==== Ice Copy Assignment Operator ============================================
Ice&	Ice::operator= (const Ice& ice)
{
	type = ice.type;
	return (*this);
}

//==== Ice Clone Overrideing ===================================================
Ice		*Ice::clone(void) const
{
	return (new Ice(*this));
}

//==== use =====================================================================
void	Ice::use(ICharacter& target)
{
	std::cout	<< "* shoots an ice bolt at "
				<< target.getName() << " *"
				<< std::endl;
}
