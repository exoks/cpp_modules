//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########         < RPN.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/31 20:55:06 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/31 20:55:09 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
//====< RPN >===================================================================

#ifndef __RPN_HPP__
# define __RPN_HPP__

# define VALID_ARGS	2

# include <iostream>
# include <sstream>
# include <stack>
# include "FSM.hpp"
# include "Exception.hpp"

typedef std::stack<int>	Stack;

class	RPN
{
	private:
		RPN(void);
		
		static void	makeOperation(Stack & stack, std::string opr);
	
	public:
		static int	calculator(std::string expression);

};

#endif /*__RPN_HPP__*/
