/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 22:37:53 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/29 16:41:49 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __SED_HPP__
# define __SED_HPP__
# include <iostream>
# include <fstream>

class	Sed
{
	private:
		std::string	fileName;
		std::string	s1;
		std::string	s2;
	
	public:
		Sed();
		Sed(char **av);
		Sed&	operator=(const Sed& sed);
		void	replace(void);
};

#endif /*__SED_HPP__*/
