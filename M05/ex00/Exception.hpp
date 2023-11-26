/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:26:55 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/22 21:01:03 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#pragma once
#ifndef __EXCEPTION_HPP__
# define __EXCEPTION_HPP__
# include <exception>
# include <iostream>

class	Exception : public std::exception
{
	protected:
		std::string	msg;

	public:
		Exception(std::string msg);
		virtual ~Exception() throw();

		virtual const char	*what() const throw();
};

class GradeTooHighException : public Exception
{
	public:
		GradeTooHighException();
		~GradeTooHighException() throw();
};

class GradeTooLowException : public Exception
{
	public:
		GradeTooLowException();
		~GradeTooLowException() throw();
};

#endif /*__EXCEPTION_HPP__*/
