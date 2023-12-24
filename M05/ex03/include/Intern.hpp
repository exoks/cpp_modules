//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < Intern.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 16:43:10 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 16:49:05 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __INTERN_HPP__
# define __INTERN_HPP__

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	public:
		Intern(void);
		Intern(const Intern & intern);
		~Intern(void);

		Intern &	operator=(const Intern & intern);
		AForm		*makeForm(std::string name, std::string target);
};

AForm	*newSCForm(std::string target);
AForm	*newRRForm(std::string target);
AForm	*newPPForm(std::string target);

#endif /*__INTERN_HPP__*/
