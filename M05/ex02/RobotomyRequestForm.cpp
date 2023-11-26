/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:44:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/24 15:47:10 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

//====< Constructor >===========================================================
RobotomyRequestForm::RobotomyRequestForm(void) : AForm("x", false, 72, 45)
{
}

//====< Constructor >===========================================================
RobotomyRequestForm::RobotomyRequestForm(std::string name)
: AForm(name, false, 72, 45)
{
}

//====< Constructor >===========================================================
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& fm)
: AForm(fm.getName(), fm.getIsSigned(), fm.getSignGrade(), fm.getExecGrade())
{
}

//====< Destructor >============================================================
RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

//====< operator= >=============================================================
RobotomyRequestForm&	RobotomyRequestForm
::operator=(RobotomyRequestForm const & form)
{
	this->setIsSigned(form.getIsSigned());
	return (*this);
}

//====< beSigned >==============================================================
void	RobotomyRequestForm::beSigned(const Bureaucrat& bureaucrat)
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
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		std::cout << "Making drilling noise: trrrrrrrrrrr" << std::endl;
		if (!this->getIsSigned() || executor.getGrade() > this->getSignGrade())
			throw (Exception("robotomy failed"));
		std::cout	<< this->getName()
					<< " :has been robotomized successfully."
					<< std::endl;
		/* subject still not clear for me */
	}catch (Exception& e){
		std::cout << e.what() << std::endl;
	}
}
