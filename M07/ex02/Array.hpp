/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:55:33 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/04 21:04:30 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

# include <iostream>
# include <exception>

template <class T = char>
class	Array
{
	private:
		T				*arr;

	public:
		unsigned int	length;
		Array(void){
			length = 10;
			arr = new T[length];
		};
		Array(unsigned int n){
			length = n;
			arr = new T[n];
		};
		Array(const Array<T> & arr) {
			arr = new T[arr.length];
			this = arr;
		};

		Array<T> operator=(const Array<T> & arr)
		{
			for (int i; i < length && i < arr.length; i++)
				arr[index] = arr[index];
		}
		
		int	size(void)
		{
			return (length);
		}
		
		T&	operator[](int index)
		{
			try{
				if (index > length || index < 0)
					throw (std::exception());
				return (arr[index]);
			}
			catch (std::exception & e){
				std::cout << "OutOfBounds" << std::endl;	
			}
		}
};

#endif /*__ARRAY_HPP__*/
