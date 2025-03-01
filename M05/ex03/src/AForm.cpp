//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀               𓐓  AForm.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/11/21 10:57:16 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/03/01 19:11:54 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

#include "AForm.hpp"

//====< Constructor >===========================================================
AForm::AForm() : name("Unknown"), isSigned(false), signGrade(150), execGrade(0) 
{
}

//====< Constructor >===========================================================
AForm::AForm(std::string name, bool isSigned, int signGrade, int execGrade)
: name(name), isSigned(isSigned), signGrade(signGrade), execGrade(execGrade)
{
	try
	{
		if (signGrade < 1 || execGrade < 1 || signGrade > 150 || execGrade > 150)
			throw (Exception("grade < 1 or grade > 150"));
	}catch (Exception & e){
		std::cout << "Invalid Grade: " << e.what() << std::endl;
	}
}

//====< Copy Constructor >======================================================
AForm::AForm(const AForm& f)
: name(f.name), signGrade(f.signGrade), execGrade(f.execGrade)
{
}

//====< Destructor >============================================================
AForm::~AForm()
{
}

//====< operator= >=============================================================
AForm&	AForm::operator=(const AForm& form)
{
	isSigned = form.isSigned;
	return (*this);
}

std::ostream&	operator<<(std::ostream& stream, const AForm& form)
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
std::string	AForm::getName(void) const
{
	return (name);
}

//====< getIsSigned >===========================================================
bool	AForm::getIsSigned(void) const
{
	return (isSigned);
}

//====< setIsSigned >===========================================================
void	AForm::setIsSigned(bool isSigned)
{
	this->isSigned = isSigned;
}

//====< getSignedGrade >========================================================
int	AForm::getSignGrade(void) const
{
	return (signGrade);
}

//====< getExecGrade >==========================================================
int	AForm::getExecGrade(void) const
{
	return (execGrade);
}
