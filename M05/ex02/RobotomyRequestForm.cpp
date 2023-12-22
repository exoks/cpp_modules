/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:44:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/21 22:21:36 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

//====< Constructor >===========================================================
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("x", false, 72, 45)
{
}

//====< Constructor >===========================================================
RRForm::RobotomyRequestForm(std::string name) : AForm(name, false, 72, 45)
{
}

//====< Constructor >===========================================================
RRForm::RobotomyRequestForm(RRForm& form)
: AForm(form.getName(), false, form.getSignGrade(), form.getExecGrade())
{
}

//====< Destructor >============================================================
RRForm::~RobotomyRequestForm(void)
{
}

//====< operator= >=============================================================
RRForm&	RobotomyRequestForm::operator=(RRForm const & form)
{
	this->setIsSigned(form.getIsSigned());
	return (*this);
}

//====< beSigned >==============================================================
void	RRForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->getIsSigned() == true)
		throw (Exception("form already signed"));
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw (GradeTooLowException());
	this->setIsSigned(true);
}

//====< execute >===============================================================
void	RRForm::execute(Bureaucrat const & executor) const
{
	std::string	msg[2] = {"success", "failure"};
	int		index;

	index = rand() % 2;
	if (this->getIsSigned() == false)
		throw (Exception("form is not signed."));
	if (executor.getGrade() > this->getSignGrade())
		throw (GradeTooLowException());
	std::cout 	<< this->getName()
			<< " robotomized with "
			<< msg[index] << std::endl;
}
