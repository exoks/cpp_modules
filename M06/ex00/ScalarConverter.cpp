/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:42:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/05 14:04:48 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

# define TO_INT();
//====< strtod >================================================================
t_data	strtod(std::string input);

//====< convert >===============================================================
void	ScalarConverter::convert(std::string input)
{
//	void	(*fun[4])(t_data& data) = {toChar, toInt, toDouble, toFloat};
//	t_data	data;
	int		type;

	type = FSM::detectType(input);
//	data = strtod(input);
//	for (int index = 0; index < 4; index++)
//		fun[index](data);
}

void	fromInt(std::string input)
{
	std::stringstream	ss(input);
	int					container;

	ss >> container;
}

/*
//====< strtod >================================================================
t_data	strtod(std::string input)
{
	std::stringstream	ss(input);
	t_data				data;

	data.type = FSM::detectType(input);
	if (data.type == CHAR)
		ss >> data.cValue;
	if (data.type == INT)
		ss >> data.iValue;
	if (data.type == DOUBLE)
		ss >> data.dValue;
	if (data.type == FLOAT)
		ss >> data.fValue;
	return (data);
}
//====< toChar >============================================================
void	toChar(t_data& data)
{
	char	c;

	// This case just for testing bcz the case of 0 is exist
	c = 0;
	std::cout << "Char: ";
	if (data.type == CHAR)
		c = data.cValue;
	if (data.type == INT && data.iValue >= 32 && data.iValue <= 126)
		c = static_cast<char>(data.iValue);
	if (data.type == DOUBLE && data.dValue >= 32 && data.dValue <= 126)
		c = static_cast<char>(data.dValue);
	if (data.type == FLOAT && data.fValue >= 32 && data.fValue <= 126)
		c = static_cast<char>(data.fValue);
	if (c == 0)
		std::cout << "no displyabale" << std::endl;
	else
		std::cout << c << std::endl;
	// Notice:
	// don't forget add the case of impossible in additon in case of non dis
}

//====< toInt >=============================================================
void	toInt(t_data& data)
{
	std::cout << "Int: ";
	if (data.type == CHAR)
		std::cout << static_cast<int>(data.cValue);
	else if (data.type == INT)
		std::cout << data.iValue;
	else if (data.type == DOUBLE
			&& data.dValue >= INT_MIN && data.dValue <= INT_MAX)
		std::cout << static_cast<int>(data.dValue);
	else if (data.type == FLOAT
			&& data.fValue >= INT_MIN && data.fValue <= INT_MAX)
		std::cout << static_cast<int>(data.fValue);
	else
		std::cout << "Impossible";
	std::cout << std::endl;
}

//====< toDouble >=========================================================
void	toDouble(t_data& data)
{
	std::cout << "Double: ";
	if (data.type == CHAR)
		std::cout << static_cast<double>(data.cValue);
	else if (data.type == INT)
		std::cout << static_cast<double>(data.iValue);
	else if (data.type == DOUBLE)
		std::cout << data.dValue;
	else if (data.type == FLOAT)
		std::cout << static_cast<double>(data.fValue);
	else
		std::cout << "Impossible";
	std::cout << std::endl;
}

//====< toFloat >==========================================================
void	toFloat(t_data& data)
{
	std::cout << "Float: ";
	if (data.type == CHAR)
		std::cout << static_cast<float>(data.cValue) << "f";
	else if (data.type == INT)
		std::cout << static_cast<float>(data.iValue) << "f";
	else if (data.type == DOUBLE)
		std::cout << static_cast<float>(data.dValue) << "f";
	else if (data.type == FLOAT)
		std::cout << data.dValue << "f";
	else
		std::cout << "Impossible";
	std::cout << std::endl;
}
*/
// NOTICE:
// need to add more optimizaiton to this fucking code
/*	std::string state[8] = {"START",
							"CHAR",
							"INT",
							"FUTURE_INT",
							"DOUBLE",
							"FUTURE_DOUBLE",
							"FLOAT", "STRING"};*/
