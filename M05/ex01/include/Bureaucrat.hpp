//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < Bureaucrat.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 17:31:24 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 18:29:51 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __BUREAUCRAT_HPP_
# define __BUREAUCRAT_HPP_

class	Form;

# include <iostream>
# include "Exception.hpp"
# include "Form.hpp"

class	Bureaucrat
{
	private:
		const std::string	name;
		int			grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & inst);
		~Bureaucrat(void);
		
		Bureaucrat&	operator=(const Bureaucrat & inst);
		
		std::string	getName(void) const;
		int			getGrade(void) const;
		
		void		incrementGrade(void);
		void		decrementGrade(void);

		void		signForm(Form & form);
};

std::ostream&		operator<<(std::ostream & stream, Bureaucrat & inst);

#endif /*__BUREAUCRAT_HPP__*/
