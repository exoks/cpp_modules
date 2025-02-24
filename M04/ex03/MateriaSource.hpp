/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:12:13 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/04 21:24:38 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __MATERIASOURCE_HPP__
# define __MATERIASOURCE_HPP__
# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria	**db;
		int			idx;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& mSource);
		~MateriaSource();

		MateriaSource&	operator=(const MateriaSource& mSource);

		void			learnMateria(AMateria *m);
		AMateria		*createMateria(std::string const& type);
};

#endif /*__MATERIASOURCE_HPP__*/
