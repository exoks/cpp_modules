/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:30:46 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/23 19:28:14 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"

//====< Constructor >===========================================================
Exception::Exception(std::string msg)
{
	this->msg = "Exception Caught: " + msg;
}

//====< Destructor >===========================================================
Exception::~Exception() throw()
{
}

//====< what >==================================================================
const char	*Exception::what() const throw()
{
	return (msg.c_str());
}

//====< GradeTooHighException Constructor >=====================================
GradeTooHighException::GradeTooHighException() : Exception("Can't hight grade")
{
}

//====< GradeTooHighException Constructor >=====================================
GradeTooHighException::~GradeTooHighException() throw()
{
}

//====< gradetoolowexception constructor >=====================================
GradeTooLowException::GradeTooLowException() : Exception("Can't lower grade")
{
}

//====< gradetoolowexception constructor >=====================================
GradeTooLowException::~GradeTooLowException() throw()
{
}

