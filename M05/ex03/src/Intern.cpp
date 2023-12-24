//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < Intern.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 17:02:43 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 17:02:43 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#include "Intern.hpp"

//====< constructor >===========================================================
Intern::Intern(void)
{
}

//====< copy constructor >======================================================
Intern::Intern(const Intern & intern)
{
	*this = intern;
}

//====< destructor >============================================================
Intern::~Intern(void)
{
}

//====< operator= >=============================================================
Intern & Intern::operator=(const Intern & intern)
{
	(void) intern;
	return (*this);
}

//====< makeForm >==============================================================
AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm		*(*form[3])(std::string) = {newSCForm, newRRForm, newPPForm};
	std::string	type[3];
	
	type[0] = "shrubbery creation";
	type[1] = "robotomy request";
	type[2] = "presidential pardon";
	for (int index = 0; index < 3; index++)
	{
		if (type[index] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return (form[index](target));
		}
	}
	std::cout << "Intern could'nt create " << name << std::endl;
	return (NULL);
}

//====< newSCForm >=============================================================
AForm	*newSCForm(std::string target)
{
	return (new SCForm(target));
}

//====< newRRForm >=============================================================
AForm	*newRRForm(std::string target)
{
	return (new RRForm(target));
}

//====< newPPForm >=============================================================
AForm	*newPPForm(std::string target)
{
	return (new PPForm(target));
}
