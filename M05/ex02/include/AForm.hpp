//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < AForm.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 17:40:56 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 18:34:07 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __AFORM_HPP__
# define __AFORM_HPP__

class	Bureaucrat;

# include "Bureaucrat.hpp"

class	AForm
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		AForm(void);
		AForm(std::string name, bool isSigned, int signGrade, int execGrade);
		AForm(const AForm & form);
		virtual ~AForm(void);

		AForm&				operator=(const AForm & form);
		std::string			getName(void) const;
		bool				getIsSigned(void) const;
		void				setIsSigned(bool isSigned);
		int					getSignGrade(void) const;
		int					getExecGrade(void) const;

		virtual void		beSigned(const Bureaucrat & bureaucrat) = 0;
		virtual void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream & stream, const AForm & form);

#endif /*__AFORM_HPP__*/
