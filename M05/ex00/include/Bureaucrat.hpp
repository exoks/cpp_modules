//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < Bureaucrat.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 17:26:49 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 17:26:51 by oezzaou
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
# include "Exception.hpp"

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;

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
};

std::ostream&		operator<<(std::ostream & stream, Bureaucrat & inst);

#endif /*__BUREAUCRAT_HPP__*/
