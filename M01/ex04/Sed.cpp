/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:40:48 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 13:07:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Sed.hpp"

//==== Sed Default Constructor =================================================
Sed::Sed(void)
{
}

//==== Sed Constructor =========================================================
Sed::Sed(char **av) : fileName(av[1]), s1(av[2]), s2(av[3])
{
}

//==== Copy Assignment Operator ================================================
Sed&	Sed::operator=(const Sed& sed)
{
	fileName = sed.fileName;
	s1 = sed.s1;
	s2 = sed.s2;
	return (*this);
}

//==== replace =================================================================
void	Sed::replace(void)
{
	std::string		line;
	std::ofstream	outfile;
	std::ifstream	infile;
	size_t			index;

	infile.open(fileName, std::ios::in);
	outfile.open(fileName + ".replace", std::ios::trunc);
	while (infile && outfile && std::getline(infile, line))
	{
		index = line.find(s1, 0);
		while (index != std::string::npos)
		{
			line.erase(index, s1.length());
			line.insert(index, s2);
			index = line.find(s1, index);
		}
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
}
