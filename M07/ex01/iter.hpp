/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 17:07:18 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/04 18:17:36 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__
# include <iostream>

template <typename T>
void	iter(T arr[], int len, void fun(T & element));

template <typename T>
void	fun(T & element);

#endif /*__ITER_HPP__*/
