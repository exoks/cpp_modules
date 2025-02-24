/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:58:49 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 22:01:10 by oezzaou          ###   ########.fr       */
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
		void		announce(void);
		std::string	get_name(void);
		void		set_name(std::string new_name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
