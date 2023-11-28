/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:45:09 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/28 01:10:12 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

typedef enum	e_state
{
	START,
	CHAR,
	INT,
	FUTURE_INT,
	FLOAT,
	DOUBLE,
	FUTURE_DOUBLE,
	STRING,
	END,
}		t_state;

void	displayInfo(int type, double value);
int	get_type(std::string str);
int	get_next_state(int prev_stat, char input);
void	convert(std::string input);
double	get_value(int type, std::string input);

//====< main >==================================================================
int	main(int ac, char **av)
{

	if (ac == 1)
		return (EXIT_FAILURE);
	convert(std::string(*(++av)));
	return (EXIT_SUCCESS);
}

void	convert(std::string input)
{
	std::string state[8] = {"START", "CHAR", "INT", "FUTURE_INT", "FLOAT", "DOUBLE", "FUTURE_DOUBLE", "STRING"};
	int	type;
	double	value;
	
	type = get_type(input);
	std::cout << state[type] << std::endl;
	value = get_value(type, input);
	displayInfo(type, 0);
}

double	get_value(int type, std::string input)
{
	double	value;

	value = input[0] * (type == CHAR);
	value += strtod(input.c_str(), NULL) * (type != CHAR);
	return (value);
}

//====< displayInfo >==========================================================
void	displayInfo(int type, double value)
{
	std::string	pdt[4] = {"char: ", "int: ", "doube: ", "float: "};
	int		index;
 
	index = -1;
	if (type == STRING)
	{
		while (++index < 4)
			std::cout << pdt[index] << "impossible" << std::endl;
		return ;
	}
	std::cout << pdt[0] << static_cast<char>(value)		<< std::endl;
	std::cout << pdt[1] << static_cast<int>(value)		<< std::endl;
	std::cout << pdt[2] << static_cast<double>(value)	<< std::endl;
	std::cout << pdt[3] << static_cast<float>(value) << "f"	<< std::endl;
}

int	get_type(std::string str)
{
	int	prev_stat;
	int	curr_state;
	int	index;

	index = -1;
	prev_stat = START;
	while (str[++index] && prev_stat != STRING)
	{
		curr_state = get_next_state(prev_stat, str[index]);
		prev_stat = curr_state;	
	}
	if (curr_state == FUTURE_INT || curr_state == FUTURE_DOUBLE)
		curr_state = STRING;
	return (curr_state);
}

//====< get_next_state >========================================================
int	get_next_state(int prv, char input)
{
	if (prv == START && input == ' ')
		return (START);
	if (prv == START && !isdigit(input))
		return (strchr("+-", input)? FUTURE_INT: CHAR);
	if ((prv == START || prv == FUTURE_INT || prv == INT) && isdigit(input))
		return (INT);
	if (prv == INT && input == '.')
		return (FUTURE_DOUBLE);
	if ((prv == FUTURE_DOUBLE || prv == DOUBLE) && isdigit(input))
		return (DOUBLE);
	if ((prv == INT || prv == DOUBLE) && input == 'f')
		return (FLOAT);
	if (prv != START && input == ' ')
		return (END);
	return (STRING);
}
