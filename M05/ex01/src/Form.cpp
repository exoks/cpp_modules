//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀                𓐓  Form.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/12/22 18:32:52 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/03/01 18:45:50 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include "Form.hpp"

//====< Constructor >===========================================================
Form::Form() : name("Unknown"), isSigned(false), signGrade(150), execGrade(150) 
{
}

//====< Constructor >===========================================================
Form::Form(std::string name, int signGrade, int execGrade)
: name(name), isSigned(false), signGrade(signGrade), execGrade(execGrade)
{
	try
	{
		if (signGrade < 1 || signGrade > 150
			|| execGrade < 1 || execGrade > 150)
			throw (Exception("grade < 1 or grade > 150"));
	} catch (Exception & e){
		std::cout << "Invalid Grade: " << e.what() << std::endl;
	}
}

//====< Copy Constructor >======================================================
Form::Form(const Form & form)
: name(form.name), signGrade(form.signGrade), execGrade(form.execGrade)
{
	this->isSigned = false;
}

//====< Destructor >============================================================
Form::~Form()
{
}

//====< operator= >=============================================================
Form&	Form::operator=(const Form & form)
{
	this->isSigned = form.isSigned;
	return (*this);
}

//====< operator<< >============================================================
std::ostream&	operator<<(std::ostream & stream, const Form & form)
{
	std::string	boolVal[2] = {"false", "true"};

	stream  << "|Form: "
			    << form.getName()
			    << " |SignGrade: "
			    << form.getSignGrade()
			    << " |execGrade: "
			    << form.getExecGrade()
			    << " |is Signed: "
			    << boolVal[form.getIsSigned()]
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
void	Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (this->isSigned == true)
		throw(Exception("form already signed"));
	if (bureaucrat.getGrade() > this->signGrade)
		throw(GradeTooLowException());
	this->isSigned = true;
}
