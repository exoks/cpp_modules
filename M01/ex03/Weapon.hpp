/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 18:52:36 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 22:12:59 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		Weapon();
		Weapon(std::string type);
		std::string	getType(void);
		void		setType(std::string type);
};

#endif
