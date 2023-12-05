/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:34:00 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/05 21:10:15 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

# include "FSM.hpp"
# include <sstream>

typedef struct s_data
{
	int		type;
	char	cValue;
	int		iValue;
	double	dValue;
	float	fValue;
}				t_data;

class	ScalarConverter
{
	public:
		static void	convert(std::string input);
};

void	fromInt(std::string input);

#endif /*__SCALARCONVERTER_HPP__*/
