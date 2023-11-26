/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:16:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/23 19:31:42 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				b("b", 5);
	ShrubberyCreationForm	s("shrubbey");
	RobotomyRequestForm		r("rebot");
	PresidentialPardonForm	p("president");

	std::cout << s;
	std::cout << r;
	
	s.beSigned(b);
	r.beSigned(b);
	p.beSigned(b);

	s.execute(b);
	r.execute(b);
	p.execute(b);
	return (EXIT_SUCCESS);
}
