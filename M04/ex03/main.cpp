/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:10:28 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 12:51:36 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

//==== Main Function ===========================================================
int	main(void)
{
	ICharacter		*oussama = new Character("oussama");
	ICharacter		*bob = new Character("jim");
	IMateriaSource	*src = new MateriaSource();
	AMateria		*tmp;

	std::cout	<< std::endl
				<< "============== Main Part ==============" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	oussama->equip(tmp);
	tmp = src->createMateria("cure");
	oussama->equip(tmp);

	oussama->use(0, *bob);
	oussama->use(1, *bob);

	std::cout	<< std::endl
				<< "========== Deleting Instance ==========" << std::endl;
	delete oussama;
	delete bob;
	delete src;
	return (EXIT_SUCCESS);
}
