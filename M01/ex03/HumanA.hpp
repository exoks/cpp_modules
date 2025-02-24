/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 19:02:54 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 14:47:49 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string name;
		Weapon		&weapon;
	
	public:
		HumanA(std::string name, Weapon &weapon);
		void	attack(void);
};

#endif
