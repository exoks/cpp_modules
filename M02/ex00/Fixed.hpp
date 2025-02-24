/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:31:24 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/13 15:13:57 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __FIXED_HPP__
# define __FIXED_HPP__
# include <iostream>

class	Fixed
{
	private:
		int					fixedPointNbr;
		static const int	fracBits;

	public:
		Fixed();
		Fixed(Fixed &fixed);
		Fixed&	operator=(Fixed& fixed);
		~Fixed();
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif /* __FIXED_HPP__ */
