/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:23:26 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 13:01:53 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Dog.hpp"
# include "Cat.hpp"
# include "WrongCat.hpp"

int main(void)
{
	const Animal		*animal, *dog, *cat;
	const WrongAnimal	*wrongAnimal;

	std::cout	<< std::endl
				<< "=============== Main testes ===============" << std::endl;
	animal = new Animal();
	dog	= new Dog();
	cat = new Cat();
	dog->makeSound();
	cat->makeSound();
	animal->makeSound();
	delete animal;
	delete dog;
	delete cat;
	
	std::cout	<< std::endl
				<< "===========================================" << std::endl;
	animal = new Cat();
	animal->makeSound();
	delete animal;
	std::cout << "-------------------" << std::endl;
	wrongAnimal = new WrongCat();
	wrongAnimal->makeSound();
	delete wrongAnimal;

	return (EXIT_SUCCESS);
}
