/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:29:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/31 21:24:45 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

//=== Main Function ============================================================
int	main(void)
{
	std::string	log[2] = {"False", "True"};
	Fixed		a;
	Fixed 		b(Fixed(5.05f) * Fixed(2));

	std::cout << "=============== Main Testes ===============" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	
	std::cout << "================ My Testes ================" << std::endl;
	std::cout << "a      => " << a << std::endl;
	std::cout << "b      => " << b << std::endl;
	std::cout << "a > b  => " << log[a > b] << std::endl;
	std::cout << "a < b  => " << log[a < b] << std::endl;
	std::cout << "a >= b => " << log[a >= b] << std::endl;
	std::cout << "a <= b => " << log[a <= b] << std::endl;
	std::cout << "a == b => " << log[a == b] << std::endl;
	std::cout << "a != b => " << log[a != b] << std::endl;
	std::cout << "a + b  => " << a + b << std::endl;
	std::cout << "a - b  => " << a - b << std::endl;
	std::cout << "a * b  => " << a * b << std::endl;
	std::cout << "1 / b  => " << Fixed(1) / b << std::endl;
	std::cout << "===========================================" << std::endl;
	return (EXIT_SUCCESS);
}
