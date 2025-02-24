/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 19:01:19 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/28 20:41:16 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

//=== Zombie distructor ========================================================
Zombie::~Zombie()
{
	std::cout << name << ": Zombie destroyed" << std::endl;
}

//=== Zombie constructor =======================================================
Zombie::Zombie(std::string name)
{
	this->name = name;
}

//=== annouce ==================================================================
void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." <<std::endl;
}
