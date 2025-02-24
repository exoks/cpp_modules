/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:56:29 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/01 19:38:06 by oezzaou          ###   ########.fr       */
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
		virtual		~ClapTrap();
		ClapTrap&	operator=(const ClapTrap clapTrap);

		std::string		getName(void) const;
		void			setName(std::string name);
		int				getHitPts(void) const;
		void			setHitPts(int hitPts);
		int				getEnergyPts(void) const;
		void			setEnergyPts(int energypts);
		int				getDamagePts(void) const;
		void			setDamagePts(int damagePts);

		void virtual	attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif /*__CLAPTRAP_HPP__*/
