/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:33:01 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 17:49:23 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __SCRAVTRAP_HPP__
# define __SCRAVTRAP_HPP__
# include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavTrap);
		ScavTrap&	operator=(const ScavTrap& scavTrap);
		~ScavTrap();
	
		void	attack(const std::string& target);	
		void	guardGate();
};

#endif /*__SCAVTRAP_HPP__*/
