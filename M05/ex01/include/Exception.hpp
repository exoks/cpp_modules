//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########   < Exception.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/21 17:40:54 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 17:26:59 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __EXCEPTION_HPP__
# define __EXCEPTION_HPP__

# include <exception>
# include <iostream>

class	Exception : public std::exception
{
	protected:
		std::string	msg;

	public:
		Exception(std::string msg);
		virtual ~Exception() throw();

		virtual const char	*what() const throw();
};

class GradeTooHighException : public Exception
{
	public:
		GradeTooHighException();
		~GradeTooHighException() throw();
};

class GradeTooLowException : public Exception
{
	public:
		GradeTooLowException();
		~GradeTooLowException() throw();
};

#endif /*__EXCEPTION_HPP__*/
