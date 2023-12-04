/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:06:05 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/04 18:18:39 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

//====< main >==================================================================
int	main(void)
{
	int	arr[3] = {1, 2, 3};

	iter(arr, 3, fun);
	for (int index = 0; index < 3; index++)
		std::cout << "arr[" << index << "]" <<  " = " << arr[index] << std::endl;
	return (EXIT_SUCCESS);
}

//====< iter >==================================================================
template <typename T>
void	iter(T arr[], int len, void fun(T & element))
{
	while (len--)
		fun(arr[len]);
}

//====< fun >===================================================================
template <typename T>
void	fun(T & element)
{
	++element;
}
