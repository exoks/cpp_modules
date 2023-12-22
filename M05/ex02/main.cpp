/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:16:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/21 22:31:55 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	b("oussama", 5);
	SCForm		scform("shrubbery");
	RRForm		rrform("robot");
	PPForm		ppform("pp");

//	b.signForm(scform);
//	b.executeForm(scform);
	
//	b.signForm(rrform);
//	b.executeForm(rrform);

	b.signForm(ppform);
	b.executeForm(ppform);
	return (EXIT_SUCCESS);
}
