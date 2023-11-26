/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:35:09 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/23 12:23:04 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

//====< Constructor >===========================================================
Bureaucrat::Bureaucrat(void)
{
}

//====< Constructor >===========================================================
Bureaucrat::Bureaucrat(std::string name, int grade)
{
	this->name = name;
	try
	{
		if (grade < 1 || grade > 150)
			throw (Exception("Invalid Value: Grade < 1 or Grade > 150"));
		this->grade = grade;
	}catch (Exception& e){
		std::cout << e.what() << std::endl;
	}
}

//====< Copy Constructor >======================================================
Bureaucrat::Bureaucrat(const Bureaucrat& inst)
{
	*this = inst;
}

//====< Destructor >============================================================
Bureaucrat::~Bureaucrat(void)
{
}

//====< Copy Assignment Operator >==============================================
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& inst)
{
	name = inst.name;
	grade = inst.grade;
	return (*this);
}

//====< Insertion Overloading Operator >========================================
std::ostream& operator<<(std::ostream& stream, Bureaucrat& inst)
{
	stream	<< inst.getName()
			<< " bureaucrat grade "
			<< inst.getGrade()
			<< std::endl;
	return (stream);
}

//====< getName >===============================================================
std::string	Bureaucrat::getName(void) const
{
	return (name);
}

//====< getName >===============================================================
int			Bureaucrat::getGrade(void) const
{
	return (grade);
}

//====< incrementGrade >========================================================
void		Bureaucrat::incrementGrade(void)
{
	try
	{
		if (grade <= 1 || grade > 150)
			throw (GradeTooHighException());
		--grade;
	}
	catch (Exception& e){
		std::cout << std::string(e.what()) << std::endl;
	}
}

//====< decrementGrade >========================================================
void		Bureaucrat::decrementGrade(void)
{
	try
	{
		if (grade < 1 || grade >= 150)
			throw (GradeTooLowException());
		++grade;
	}
	catch (Exception& e){
		std::cout << std::string(e.what()) << std::endl;
	}
}

//====< signForm >==============================================================
/*void		Bureaucrat::signForm()
{
	if (form.getIsSigned() == true)
		std::cout	<< name
					<< " signed "
					<< form.getName()
					<< std::endl;
	else
		std::cout	<< "couldn't sign"
					<< std::endl;
}*/
