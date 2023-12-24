//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Form.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 17:34:59 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 18:30:02 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		Form(void);
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form & form);
		~Form(void);

		Form&			operator=(const Form & form);
	
		std::string		getName(void) const;
		bool			getIsSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;

		void			beSigned(const Bureaucrat & bureaucrat);
};

std::ostream&	operator<<(std::ostream & stream, const Form & form);

#endif /*__FORM_HPP__*/
