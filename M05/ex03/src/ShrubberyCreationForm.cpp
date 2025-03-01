# include "ShrubberyCreationForm.hpp"

//====< Constructor >===========================================================
SCForm::ShrubberyCreationForm(void) : AForm("x", false, 145, 137)
{
}

//====< Constructor >===========================================================
SCForm::ShrubberyCreationForm(std::string name) : AForm(name, false, 145, 137)
{
}

//====< Constructor >===========================================================
SCForm::ShrubberyCreationForm(SCForm & form)
	: AForm(form.getName(), false, form.getSignGrade(), form.getExecGrade())	
{
}

//====< Destructor >============================================================
SCForm::~ShrubberyCreationForm(void)
{
}

//====< operator= >=============================================================
SCForm & SCForm::operator=(SCForm const & form)
{
	this->setIsSigned(form.getIsSigned());
	return (*this);
}

//====< beSigned >==============================================================
void	SCForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->getIsSigned() == true)
		throw (Exception("shrubbery form already singed"));
	if (bureaucrat.getGrade() > this->getSignGrade())
		throw (GradeTooLowException());
	this->setIsSigned(true);
}

//====< execute >===============================================================
void	SCForm::execute(Bureaucrat const & executor) const
{
	std::fstream	fs;

	if (this->getIsSigned() == false)
		throw (Exception("form not signed"));
	if (executor.getGrade() > this->getSignGrade())
		throw (GradeTooLowException());
	fs.open(this->getName() + "_shrubbery", std::ios::out);
	fs	<< "                ,@@@@@@@,"					        << std::endl
		  << "       ,,,.   ,@@@@@@/@@@, .oo8888o."		    << std::endl
		  << "    ,&\\&&&%&&%,@@@@@/@@@@@@,8888\\88/8o"	  << std::endl
		  << "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'"	  << std::endl
		  << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'"	  << std::endl
		  << "   %&&%/ %&&&&&@@\\ V /@@' `88\\8 `/88'"	  << std::endl
		  << "   `&%\\ ` /%&'    |.|        \\ '|8'"		  << std::endl
		  << "       |o|        | |         | |"			    << std::endl
		  << "       |.|        | |         | |"			    << std::endl
		  << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//_"	<< std::endl;
	fs.close();
}
