//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########   < Exception.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/25 19:46:50 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/25 19:46:51 by oezzaou
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

#endif /*__EXCEPTION_HPP__*/
