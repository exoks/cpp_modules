/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:16:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/22 18:26:42 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	b1("b1", 20);
	Bureaucrat	b0("b0", -1);
	int			index;

	index = -1;
	std::cout << b1;
	while (++index < 19)
		b1.incrementGrade();
	std::cout << b1;
	index = -1;
	while (++index < 150)
		b1.decrementGrade();
	std::cout << b1;
	return (EXIT_SUCCESS);
}
