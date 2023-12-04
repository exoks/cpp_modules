/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:59:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/05 00:00:51 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"

//====< main >==================================================================
int	main(void)
{
	Array<int>	arr;
	Array<int>	arr2(2);

	arr2[0] = 1;
	arr2[1] = 2;
	std::cout << "arr.length : " << arr.length << std::endl;
	std::cout << "arr2.length : " << arr2.length << std::endl;

	arr = arr2;
	return (EXIT_SUCCESS);
}
