/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:16:30 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 23:27:04 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__
# include <iostream>

class	Animal
{
	protected:
		std::string type;
	
	public:
		Animal(void);
		Animal(const Animal& animal);
		Animal(std::string type);
		virtual ~Animal(void);
		
		Animal&	operator=(const Animal& animal);
	
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif /*__ANIMAL_HPP__*/
