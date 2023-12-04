/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 18:55:33 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/05 00:03:54 by oezzaou          ###   ########.fr       */
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
		int	length;
		Array(void) : length(10) {
			this->arr = new T[length];
		};
		Array(unsigned int n) : length((int) n){
			this->arr = new T[n];
		};
		Array(const Array<T> & arr) {
			this->arr = new T[arr.length];
			*this = arr;
		};

		Array<T> operator=(const Array<T> & arr)
		{
			(void) arr;
			for (int i = 0; i < length && i < arr.length; i++)
				(*this)[i] = arr[i];
			return (*this);
		}
		
		int	size(void)
		{
			return (length);
		}
		
		T&	operator[](int index) const
		{
			try{
				if (index < 0 || index >= length)
					throw (std::exception());
				return (arr[index]);
			}
			catch (std::exception & e){
				std::cout << "OutOfBounds" << std::endl;	
			}
			return (arr[0]);
		}
};

#endif /*__ARRAY_HPP__*/
