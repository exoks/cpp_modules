//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########         < FSM.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/23 19:19:37 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/23 19:19:37 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# ifndef __FSM_HPP__
# define __FSM_HPP__

# include <iostream>

typedef enum	e_state
{
	START,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	STRING,
	OPERATOR,
	FUTURE_DOUBLE,
	END,
}				t_state;

class	FSM
{
	private:
		static int	getNextState(int prv, char input);

	public:
		static int	detectType(std::string str);
};

#endif /*__FSM_HPP__*/
