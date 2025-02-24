/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:41:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 23:46:51 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __BRAIN_HPP__
# define __BRAIN_HPP__
# include <iostream>

class	Brain
{
	public:
		std::string	ideas[100];
		
		Brain(void);
		Brain(std::string type);
		Brain(const Brain& brain);
		~Brain(void);

		Brain&	operator=(const Brain& brain);
};

#endif /*__BRAIN_HPP__*/

