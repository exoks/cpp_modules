/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:17:44 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 12:22:13 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __ICHARACTER_HPP__
# define __ICHARACTER_HPP__
# include "AMateria.hpp"

class	ICharacter
{
	public:
		virtual	~ICharacter() {};
		virtual	std::string const& getName(void) const = 0;
		virtual	void		use(int idx, ICharacter& target) = 0;
		virtual	void		equip(AMateria *m) = 0;
		virtual	void		unequip(int idx) = 0;
};

#endif /*__ICHARACTER_HPP__*/
