/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:54:23 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 20:44:01 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __AMATERIA_HPP__
# define __AMATERIA_HPP__
# include <iostream>

class	ICharacter;

class	AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(void);
		AMateria(std::string const& type);
		AMateria(const AMateria& aMateria);
		virtual ~AMateria();

		AMateria&	operator=(const AMateria& aMateria);

		std::string const&	getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual	void		use(ICharacter& target) = 0;
};

#endif /*__AMATERIA_HPP__*/
