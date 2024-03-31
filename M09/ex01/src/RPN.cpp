//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########         < RPN.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/31 20:55:35 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/31 20:56:22 by oezzaou
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
int	RPN::calculator(std::string expression)
{
	std::stringstream	ss(expression);
	std::stack<int>		stack;
	std::string			buff;
	double				val;

	while (getline(ss, buff, ' '))
	{
		if (FSM::detectType(buff) == OPERATOR && stack.size() >= 2)
			makeOperation(stack, buff);
		else if (FSM::detectType(buff) == INT && std::stringstream(buff) >> val)
			stack.push(val);
		else
			throw (Exception("Error: invalid Expression"));
	}
	return (stack.top());
}

//====< makeOperation >=========================================================
void	RPN::makeOperation(Stack & stack, std::string opr)
{
	int	val[2];

	for (int index = 0; index < 2; index++)
	{
		val[index] = stack.top();
		stack.pop();
	}
	if (opr == "+")
		stack.push(val[1] + val[0]);	
	if (opr == "-")
		stack.push(val[1] - val[0]);	
	if (opr == "*")
		stack.push(val[1] * val[0]);
	if (opr == "/" && val[0] != 0)
		stack.push(val[1] / val[0]);
	if (opr == "/" && val[0] == 0)
		throw (Exception("Error: division by zero: ∞"));
}
