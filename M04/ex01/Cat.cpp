/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:42:12 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 12:53:09 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Cat.hpp"

//==== Cat Default Constructor =================================================
Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	brain = new Brain();
}

//==== Cat Copy Constructor ====================================================
Cat::Cat(const Cat& cat)
{
	brain = new Brain();
	*this = cat;
}

//==== Cat Copy Assignment Operator ============================================
Cat&	Cat::operator= (const Cat& cat)
{
	type = cat.type;
	*brain = *(cat.brain);
	return (*this);
}

//==== Cat Destructor ==========================================================
Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat Destructor Called" << std::endl;
}

//==== makeSound ===============================================================
void	Cat::makeSound(void) const
{
	std::cout << "cat : meaw meaw" << std::endl;
}
