/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:23:26 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 23:46:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal	**animals;
	Cat		cat;
	int		i;

	std::cout	<< std::endl
				<< "============= Creating Objects =============" << std::endl;
	animals = new Animal*[4];
	i = -1;
	while (++i < 4)
	{
		std::cout << i + 1 << ": ";
		if (i < 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	
	// add more tests for deep copy and not shallow copy
	std::cout	<< std::endl
				<< "============= Deleting Objects =============" << std::endl;
	while (--i >= 0)
	{
		std::cout << std::endl << 4 - i << ": ";
		animals[3 - i]->makeSound();
		delete animals[3 - i];
	}
	delete animals;
	return (EXIT_SUCCESS);
}
