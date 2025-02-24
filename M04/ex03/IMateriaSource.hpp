/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:58:43 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/06 12:22:30 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __IMATERIASOURCE_HPP__
# define __IMATERIASOURCE_HPP__
# include "AMateria.hpp"

class	IMateriaSource
{
	public:
		virtual	~IMateriaSource() {};
		virtual	void		learnMateria(AMateria*) = 0;
		virtual	AMateria	*createMateria(std::string const& type) = 0;
};

#endif /*__IMATERIASOURCE_HPP__*/
