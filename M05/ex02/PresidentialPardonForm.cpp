/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:44:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/24 16:14:20 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

//====< Constructor >===========================================================
PresidentialPardonForm::PresidentialPardonForm(void) : AForm("x", false, 25, 5)
{
}

//====< Constructor >===========================================================
PresidentialPardonForm::PresidentialPardonForm(std::string name)
: AForm(name, false, 25, 5)
{
}

//====< Constructor >===========================================================
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& fm)
: AForm(fm.getName(), fm.getIsSigned(), fm.getSignGrade(), fm.getExecGrade())
{
}

//====< Destructor >============================================================
PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

//====< operator= >=============================================================
PresidentialPardonForm&	PresidentialPardonForm
::operator=(PresidentialPardonForm const & form)
{
	this->setIsSigned(form.getIsSigned());
	return (*this);
}

//====< beSigned >==============================================================
void	PresidentialPardonForm::beSigned(const Bureaucrat& bureaucrat)
{
	try
	{
		if (bureaucrat.getGrade() > this->getSignGrade())
			throw (GradeTooLowException());
		this->setIsSigned(true);
	}catch (Exception& e){
		std::cout << e.what() << std::endl;
	}
}

//====< execute >===============================================================
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		if (!this->getIsSigned() || executor.getGrade() > this->getSignGrade())
			throw (Exception("pardoned has been denied"));
		std::cout	<< this->getName()
					<< " :has been pardoned by Zaphod Beeblebrox."
					<< std::endl;
	}catch (Exception& e){
		std::cout << e.what() << std::endl;
	}
}
