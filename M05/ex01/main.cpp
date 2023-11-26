/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 09:16:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/23 12:27:52 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"

int	main(void)
{
	Form		f("form", false, 20, 7);
	Bureaucrat	b("b", 20);

	std::cout << f;
	f.beSigned(b);
	std::cout << f;
	return (EXIT_SUCCESS);
}
