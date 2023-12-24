//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########         < RPN.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/19 16:59:29 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/19 17:12:31 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "RPN.hpp"

//====< constructor >===========================================================
RPN::RPN(void)
{
}

//====< calculator >============================================================
int	RPN::calculator(std::string exp)
{
	std::stack<int>		stack;
	std::stringstream	ss(exp);
	std::string			buff;
	double				value;

	while (getline(ss, buff, ' '))
	{
		if (FSM::detectType(buff) == OPERATOR && stack.size() >= 2)
			makeOperation(stack, buff);
		else if (FSM::detectType(buff) == INT && std::stringstream(buff) >> value)
			stack.push(value);
		else
			return (std::cout << "Error" << std::endl, EXIT_FAILURE);
	}
	std::cout << stack.top() << std::endl;
	return (EXIT_SUCCESS);
}

//====< makeoperation >=========================================================
void	RPN::makeOperation(std::stack<int> & stack, std::string optr)
{
	int	val[2];

	for (int i = 0; i < 2; i++)
	{
		val[i] = stack.top();
		stack.pop();
	}
	if (optr == "+")
		stack.push(val[1] + val[0]);	
	if (optr == "-")
		stack.push(val[1] - val[0]);	
	if (optr == "*")
		stack.push(val[1] * val[0]);
	if (optr == "/")
		stack.push(val[1] / val[0]);
}
