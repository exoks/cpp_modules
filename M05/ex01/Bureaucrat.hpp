//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < Bureaucrat.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/21 20:29:44 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/21 20:30:35 by oussama
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
		Bureaucrat(const Bureaucrat &inst);
		~Bureaucrat(void);
		
		Bureaucrat&	operator=(const Bureaucrat &inst);
		
		std::string	getName(void) const;
		int			getGrade(void) const;
		
		void		incrementGrade(void);
		void		decrementGrade(void);

		void		signForm(Form & form);
};

std::ostream&		operator<<(std::ostream& stream, Bureaucrat& inst);

#endif /*__BUREAUCRAT_HPP__*/
