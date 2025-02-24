/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:37:28 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 17:41:01 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& diamondTrap);
		DiamondTrap&	operator=(const DiamondTrap& diamondTrap);
		~DiamondTrap();
		
		void	whoAmI(void);
};

#endif /*__DIAMONDTRAP_HPP__*/
