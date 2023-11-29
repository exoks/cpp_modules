/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:42:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/29 15:55:21 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

//====< convert >===============================================================
void	ScalarConverter::convert(std::string input)
{
	void	(*fun[4])(double, int) = {toChar, toInt, toDouble, toFloat};
	int		type;

	type = FSM::detectType(input);
	for (int index = 0; index < 4; index++)
		fun[index](0, type);
}

//====< toChar >============================================================
void	toChar(double value, int type)
{
	std::cout << "Char: ";
	if (type == STRING)
		std::cout << "IMPOSSIBLE" << std::endl;
	else if (value >= 32 && value < 127)
		std::cout << static_cast<char>(value) << std::endl;
	else
		std::cout << "Non printable" << std::endl;
}

//====< toInt >=============================================================
void	toInt(double value, int type)
{
	std::cout << "Int: ";
	if (type != STRING && value >= INT_MIN && value <= INT_MAX)
		std::cout << static_cast<int>(value)	<< std::endl;
	else
		std::cout << "IMPOSSIBLE"				<< std::endl;
}

//====< toDouble >=========================================================
void	toDouble(double value, int type)
{
	std::cout << "Int: ";
	if (type != STRING && value >= INT_MIN && value <= INT_MAX)
		std::cout << static_cast<double>(value)	<< std::endl;
	else
		std::cout << "IMPOSSIBLE"				<< std::endl;
}

//====< toFloat >==========================================================
void	toFloat(double value, int type)
{
	std::cout << "Float: ";
	if (type != STRING && value >= INT_MIN && value <= INT_MAX)
		std::cout << static_cast<double>(value)	<< "f" << std::endl;
	else
		std::cout << "IMPOSSIBLE"				<< std::endl;
}
/*	std::string state[8] = {"START",
							"CHAR",
							"INT",
							"FUTURE_INT",
							"DOUBLE",
							"FUTURE_DOUBLE",
							"FLOAT", "STRING"};*/
