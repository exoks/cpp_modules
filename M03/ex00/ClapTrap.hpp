/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:56:29 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 17:42:26 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__
# include <iostream>

class	ClapTrap
{
	private:
		std::string	name;
		int			hitPts;
		int			energyPts;
		int			damagePts;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& clapTrap);
		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap clapTrap);
		
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif /*__CLAPTRAP_HPP__*/
