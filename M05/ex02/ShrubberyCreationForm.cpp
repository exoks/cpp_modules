/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:44:14 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/24 15:47:33 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

//====< Constructor >===========================================================
ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("x", false, 145, 137)
{
}

//====< Constructor >===========================================================
ShrubberyCreationForm::ShrubberyCreationForm(std::string name)
: AForm(name, false, 145, 137)
{
}

//====< Constructor >===========================================================
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& fm)
: AForm(fm.getName(), fm.getIsSigned(), fm.getSignGrade(), fm.getExecGrade())
{
}

//====< Destructor >============================================================
ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

//====< operator= >=============================================================
ShrubberyCreationForm&	ShrubberyCreationForm
::operator=(ShrubberyCreationForm const & form)
{
	this->setIsSigned(form.getIsSigned());
	return (*this);
}

//====< beSigned >==============================================================
void	ShrubberyCreationForm::beSigned(const Bureaucrat& bureaucrat)
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
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::fstream	fs;

	try
	{
		if (!this->getIsSigned() || executor.getGrade() > this->getSignGrade())
			throw (Exception("Form can't be executed"));
		fs.open(this->getName() + "_shrubbery", std::ios::out);
		fs		<< "                ,@@@@@@@,"						<< std::endl
				<< "       ,,,.   ,@@@@@@/@@@, .oo8888o."			<< std::endl
				<< "    ,&\\&&&%&&%,@@@@@/@@@@@@,8888\\88/8o"		<< std::endl
				<< "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"		<< std::endl
				<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"		<< std::endl
				<< "   %&&%/ %&&&&&@@\\ V /@@' `88\\8 `/88'"		<< std::endl
				<< "   `&%\\ ` /%&'    |.|        \\ '|8'"			<< std::endl
				<< "       |o|        | |         | |"				<< std::endl
				<< "       |.|        | |         | |"				<< std::endl
				<< "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_"	<< std::endl;
		fs.close();
	}catch (Exception& e){
		std::cout << e.what() << std::endl;
	}
}
