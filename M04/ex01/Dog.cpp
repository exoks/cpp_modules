/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:42:12 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 12:54:27 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"

//==== Dog Default Constructor =================================================
Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	brain = new Brain();
}

//==== Dog Copy Constructor ====================================================
Dog::Dog(const Dog& dog)
{
	brain = new Brain();
	(*this) = dog;
}

//==== Dog Copy Assignment Operator ============================================
Dog&	Dog::operator= (const Dog& dog)
{
	type = dog.type;
	*brain = *(dog.brain);
	return (*this);
}

//==== Dog Destructor ==========================================================
Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog Destructor Called" << std::endl;
}

//==== makeSound ===============================================================
void	Dog::makeSound(void) const
{
	std::cout << "dog : haw haw" << std::endl;
}
