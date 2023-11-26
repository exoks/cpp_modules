/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:57:16 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/23 12:28:29 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

//====< Constructor >===========================================================
Form::Form() : name("Unknown"), isSigned(false), signGrade(150), execGrade(0) 
{
}

//====< Constructor >===========================================================
Form::Form(std::string attr1, bool attr2, int attr3, int attr4) : name(attr1), signGrade(attr3), execGrade(attr4)
{
	isSigned = attr2;
	try
	{
		if (attr3 < 1 || attr4 < 1 || attr3 > 150 || attr4 > 150)
			throw (Exception("Invalid grade: grade < 1 or grade > 150"));
	}catch (Exception& e){
		std::cout << e.what() << std::endl;
	}
}

//====< Copy Constructor >======================================================
Form::Form(const Form& f) : name(f.name), signGrade(f.signGrade), execGrade(f.execGrade)
{
}

//====< Destructor >============================================================
Form::~Form()
{
}

//====< operator= >=============================================================
Form&	Form::operator=(const Form& form)
{
	isSigned = form.isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& stream, const Form& form)
{
	stream	<< "|Form: "
			<< form.getName()
			<< " |SignGrade: "
			<< form.getSignGrade()
			<< " |execGrade: "
			<< form.getExecGrade()
			<< " |is Signed: "
			<< form.getIsSigned()
			<< std::endl;
	return (stream);
}

//====< getName >===============================================================
std::string	Form::getName(void) const
{
	return (name);
}

//====< getIsSigned >===========================================================
bool	Form::getIsSigned(void) const
{
	return (isSigned);
}

//====< getSignedGrade >========================================================
int	Form::getSignGrade(void) const
{
	return (signGrade);
}

//====< getExecGrade >==========================================================
int	Form::getExecGrade(void) const
{
	return (execGrade);
}

//====< beSigned >==============================================================
void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	try
	{
		if (!(bureaucrat.getGrade() > signGrade))
			throw (GradeTooLowException());
		isSigned = true;
	}catch (GradeTooLowException& e){
		std::cout << e.what() << std::endl;
	}
}
