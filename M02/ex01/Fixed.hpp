/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:31:24 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/15 14:32:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					fixedPointNbr;
		static const int	fracBits;

	public:
		Fixed();
		Fixed(int const intNbr);
		Fixed(float const floatPointNbr);
		Fixed(const Fixed& fixed);
		~Fixed();
		Fixed&	operator=(const Fixed& fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream&	operator << (std::ostream& output, const Fixed& fixed);

#endif
