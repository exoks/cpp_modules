//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########   < Exception.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/21 20:50:27 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/21 20:50:27 by oussama
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
GradeTooHighException::GradeTooHighException() : Exception("too low grade")
{
}

//====< GradeTooHighException Constructor >=====================================
GradeTooHighException::~GradeTooHighException() throw()
{
}

//====< gradetoolowexception constructor >=====================================
GradeTooLowException::GradeTooLowException() : Exception("too low grade")
{
}

//====< gradetoolowexception constructor >=====================================
GradeTooLowException::~GradeTooLowException() throw()
{
}
