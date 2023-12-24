//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < AForm.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 17:44:25 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 17:44:44 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#include "AForm.hpp"

//====< Constructor >===========================================================
AForm::AForm(void) : name("Unknown"), isSigned(false), signGrade(150), execGrade(0) 
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
	} catch (Exception & e){
		std::cout << "Invalid Grade: " << e.what() << std::endl;
	}
}

//====< Copy Constructor >======================================================
AForm::AForm(const AForm & form)
: name(form.name), signGrade(form.signGrade), execGrade(form.execGrade)
{
}

//====< Destructor >============================================================
AForm::~AForm(void)
{
}

//====< operator= >=============================================================
AForm&	AForm::operator=(const AForm & form)
{
	isSigned = form.isSigned;
	return (*this);
}

//====< operator<< >============================================================
std::ostream&	operator<<(std::ostream & stream, const AForm & form)
{
	std::string	boolVal[2] = {"false", "true"};

	stream	<< "|Form: "
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
