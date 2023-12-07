/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:42:41 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/06 16:53:52 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

//====< strtod >================================================================
t_data	strtod(std::string input);

//====< convert >===============================================================
void	ScalarConverter::convert(std::string input)
{
	void	(*fun[4])(std::string) = {fromInt, fromInt, fromInt, fromInt};
	int		type;

	type = FSM::detectType(input);
	for (int index = 0; index < 4; index++)
		fun[index](input);
}

//====< fromChar >==============================================================
void	fromChar(std::string input)
{
	std::string			types[4] = {"Char: ", "Int: ", "Double: ", "Float: "};
	std::stringstream	ss(input);
	char				container;
	bool				isValid;

	isValid = (ss >> container);
	if (isValid)
	{
		std::cout << "Char: " << container << std::endl;
		std::cout << "Int: " << static_cast<int>(container) << std::endl;
		std::cout << "Double: " << static_cast<double>(container) << std::endl;
		std::cout << "Float: " << static_cast<float>(container) << std::endl;
	}
}

//====< fromInt >===============================================================
void	fromInt(std::string input)
{
	std::string			types[4] = {"Char: ", "Int: ", "Double: ", "Float: "};
	std::stringstream	ss(input);
	int					container;
	bool				isValid;

	isValid = (ss >> container);
	if (isValid && container >= 32 && container <= 126)
		std::cout << types[0] << static_cast<char>(container) << std::endl;
	else if (isValid && container > 126 && container <= 255 && container < 32)
		std::cout << "non displayable" << std::endl;
	if (isValid)
	{
		std::cout << types[1] << container << std::endl;
		std::cout << types[2] << static_cast<double>(container) << std::endl;
		std::cout << types[3] << static_cast<float>(container) << std::endl;
	}
	for (int index = 0; index < 4 && isValid; index++)
		std::cout << types[index] << "Impossible" << std::endl;
}

//====< fromDouble >============================================================
void	fromDouble(std::string input)
{
	std::string			types[4] = {"Char: ", "Int: ", "Double: ", "Float: "};
	std::stringstream	ss(input);
	bool				isValid;
	double				container;

	isValid = (ss >> container);
	if (isValid && container >= 32 && container <= 126)
		std::cout << "Char: " << static_cast<char>(container) << std::endl;
	if (isValid && container >= INT_MIN && container <= INT_MAX)
		std::cout << "Int : " << static_cast<int>(container) << std::endl;
	if (isValid)
	{
		std::cout << "Double: " << container << std::endl;
		std::cout << "Float : " << static_cast<float>(container) << std::endl;
	}
	for (int index = 0; index < 4 && isValid; index++)
		std::cout << types[index] << "Impossible" << std::endl;
}

//====< fromDouble >============================================================
void	fromFloat(std::string input)
{
	std::string			types[4] = {"Char: ", "Int: ", "Double: ", "Float: "};
	std::stringstream	ss(input);
	bool				isValid;
	float				container;

	isValid = (ss >> container);
	if (isValid && container >= 32 && container <= 126)
		std::cout << "Char: " << static_cast<char>(container) << std::endl;
	if (isValid && container >= INT_MIN && container <= INT_MAX)
		std::cout << "Int : " << static_cast<int>(container) << std::endl;
	if (isValid)
	{
		std::cout << "Double: " << static_cast<double>(container) << std::endl;
		std::cout << "Float : " << container << std::endl;
	}
	for (int index = 0; index < 4 && isValid; index++)
		std::cout << types[index] << "Impossible" << std::endl;
}

/*
void	doubleContainerInfo(std::string input)
{
	std::stringstream	ss(input);
	double				container;


	std::cout << "Int: ";
	if (!ss >> container)
		std::cout << "Impossible" << std::endl;
	std::cout << containder << std::endl;
}
*/
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
