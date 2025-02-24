/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:05:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 11:47:10 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

//==== AMateria Default Constructor ============================================
AMateria::AMateria(void)
{
	std::cout << "AMateria Constructor Called" << std::endl;
}

//==== AMateria Default Constructor ============================================
AMateria::AMateria(std::string const& type) : type(type)
{
	std::cout << "AMateria Constructor Called" << std::endl;
}

//==== AMateria Copy Consturctor ===============================================
AMateria::AMateria(const AMateria& aMateria)
{
	*this = aMateria;
}

//==== AMateria Destructor =====================================================
AMateria::~AMateria()
{
	std::cout << "AMateria Destructor Called" << std::endl;
}

//==== AMateria Copy Assignment Operator =======================================
AMateria&	AMateria::operator= (const AMateria& aMateria)
{
	(void) aMateria;
	return (*this);
}

//==== getType =================================================================
std::string const&	AMateria::getType(void) const
{
	return (type);
}
