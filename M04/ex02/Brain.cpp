/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:47:16 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 13:08:21 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "Brain.hpp"

//==== Brain Default Constructor ===============================================
Brain::Brain(void)
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

//==== Brain Constructor =======================================================
Brain::Brain(std::string type)
{
	int	i;

	i = -1;
	while (++i < 100)
		ideas[i] = type;
}

//==== Brain Copy Constructor ==================================================
Brain::Brain(const Brain& brain)
{
	(*this) = brain;
}

//==== Brain Destructor ========================================================
Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
}

//==== Brain Copy Assignment Operator ==========================================
Brain&	Brain::operator=(const Brain& brain)
{
	int	i;

	i = -1;
	while (++i < 100)
		ideas[i] = brain.ideas[i];
	return (*this);
}
