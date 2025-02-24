/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:58:49 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 20:39:14 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		~Zombie();
		Zombie(std::string name);
		void	announce(void);
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
