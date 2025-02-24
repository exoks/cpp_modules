/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:25:04 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 22:20:09 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __WRONGCAT_HPP__
# define __WRONGCAT_HPP__
# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& wrongCat);
		WrongCat&	operator= (const WrongCat& wrongCat);
		~WrongCat(void);

		void	makeSound(void) const;
};

#endif /*__WRONGCAT_HPP__*/
