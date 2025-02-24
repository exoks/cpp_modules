/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:35:21 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 16:04:36 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __ICE_HPP__
# define __ICE_HPP__
# include "Character.hpp"

class	Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& ice);
		~Ice();
		
		Ice&	operator= (const Ice& ice);

		Ice		*clone(void) const;
		void	use(ICharacter& target);
};

#endif /*__ICE_HPP__*/
