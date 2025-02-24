/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 13:16:04 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 17:49:11 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__
# include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& fragTrap);
		FragTrap&	operator=(const FragTrap& fragTrap);
		~FragTrap();
	
		void	highFivesGuys(void);
};

#endif /*__FRAGTRAP_HPP__*/
