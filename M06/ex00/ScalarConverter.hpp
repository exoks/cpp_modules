/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 10:34:00 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/29 15:54:25 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

# include "FSM.hpp"

class	ScalarConverter
{
	public:
		static void	convert(std::string input);
};

void	toChar(double value, int type);
void	toInt(double value, int type);
void	toDouble(double value, int type);
void	toFloat(double value, int type);

#endif /*__SCALARCONVERTER_HPP__*/
