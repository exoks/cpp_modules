/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:25:04 by oezzaou           #+#    #+#             */
/*   Updated: 2023/09/05 23:16:31 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __DOG_HPP__
# define __DOG_HPP__
# include "Animal.hpp"
# include "Brain.hpp"

class	Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog(void);
		Dog(const Dog& dog);
		~Dog(void);

		Dog&	operator= (const Dog& dog);
		
		void	makeSound(void) const;
};

#endif /*__DOG_HPP__*/
