/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:42:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/25 17:35:29 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// atoi
// fatoi


//====< getState >==============================================================
int	getState(std::string str)
{
	if (str.lenght() == 1)
		std::cout << "the type is string";
}

//====< convert >===============================================================
void	ScalarConverter::convert(std::string input)
{
//	getState();
	std::cout	<< "char: "
				<< atoi(input.c_str())
				<< std::endl;

	std::cout	<< "int: "
				<< atoi(input.c_str())
				<< std::endl;

	std::cout	<< "float: "
				<< (float) atof(input.c_str())
				<< std::endl;

	std::cout	<< "double: "
				<< (double) strtod(input.c_str(), NULL)
				<< std::endl;
}
