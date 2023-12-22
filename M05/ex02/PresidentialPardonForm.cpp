/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:44:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/21 22:30:56 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

//====< Constructor >===========================================================
PPForm::PresidentialPardonForm(void) : AForm("x", false, 25, 5)
{
}

//====< Constructor >===========================================================
PPForm::PresidentialPardonForm(std::string name) : AForm(name, false, 25, 5)
{
}

//====< Constructor >===========================================================
PPForm::PresidentialPardonForm(PPForm & fm)
: AForm(fm.getName(), false, fm.getSignGrade(), fm.getExecGrade())
{
}

//====< Destructor >============================================================
PPForm::~PresidentialPardonForm(void)
{
}

//====< operator= >=============================================================
PPForm &	PresidentialPardonForm::operator=(PPForm const & form)
{
	this->setIsSigned(form.getIsSigned());
	return (*this);
}

//====< beSigned >==============================================================
void	PPForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->getIsSigned() == true)
		throw (Exception("form already signed"));
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw (GradeTooLowException());
	this->setIsSigned(true);
}

//====< execute >===============================================================
void	PPForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw (Exception("form is not signed."));
	if (executor.getGrade() > this->getSignGrade())
		throw (GradeTooLowException());
	std::cout	<< this->getName()
			<< " :has been pardoned by Zaphod Beeblebrox."
			<< std::endl;
}
