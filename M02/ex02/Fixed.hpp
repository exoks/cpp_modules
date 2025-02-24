/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:31:24 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/31 21:24:17 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __FIXED_HPP__
# define __FIXED_HPP__
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
		~Fixed();
		Fixed(const Fixed& fixed);
		Fixed&	operator=(const Fixed& fixed);
		bool	operator>(const Fixed& fixed) const;
		bool	operator<(const Fixed& fixed) const;
		bool	operator<=(const Fixed& fixed);
		bool	operator>=(const Fixed& fixed);
		bool	operator==(const Fixed& fixed);
		bool	operator!=(const Fixed& fixed);
		Fixed	operator+(const Fixed& fixed);
		Fixed	operator-(const Fixed& fixed);
		Fixed	operator*(const Fixed& fixed);
		Fixed	operator/(const Fixed& fixed);
		Fixed&	operator++(void);
		Fixed	operator++(int);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
		static	Fixed& min(Fixed& f1, Fixed& f2);
		static	Fixed& min(const Fixed& f1, const Fixed& f2);
		static 	Fixed& max(Fixed& f1, Fixed& f2);
		static	Fixed& max(const Fixed& f1, const Fixed& f2);
};

std::ostream&	operator<< (std::ostream& os, const Fixed& fixed);

#endif /* __FIXED_HPP__ */
