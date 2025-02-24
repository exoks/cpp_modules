/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:01:19 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 22:04:15 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

//=== Zombie distructor ========================================================
Zombie::~Zombie()
{
	std::cout << name << ": Destructor Called" << std::endl;
}

//=== get_name =================================================================
std::string	Zombie::get_name(void)
{
	return (name);
}

//=== set_name =================================================================
void	Zombie::set_name(std::string new_name)
{
	name = new_name;
}

//=== annouce ==================================================================
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
