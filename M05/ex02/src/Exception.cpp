//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########   < Exception.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 18:50:44 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 18:50:44 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Exception.hpp"

//====< Constructor >===========================================================
Exception::Exception(std::string msg)
{
	this->msg = msg;
}

//====< Destructor >===========================================================
Exception::~Exception() throw()
{
}

//====< what >==================================================================
const char	*Exception::what() const throw()
{
	return (msg.c_str());
}

//====< GradeTooHighException Constructor >=====================================
GradeTooHighException::~GradeTooHighException() throw()
{
}

//====< gradetoolowexception constructor >=====================================
GradeTooLowException::~GradeTooLowException() throw()
{
}

//====< GradeTooHighException Constructor >=====================================
GradeTooHighException::GradeTooHighException() : Exception("too high grade")
{
}

//====< gradetoolowexception constructor >=====================================
GradeTooLowException::GradeTooLowException() : Exception("too low grade")
{
}
