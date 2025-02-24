/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:13:24 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 22:16:24 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class	HumanB
{
	private:
		std::string name;
		Weapon		*weapon;

	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif
