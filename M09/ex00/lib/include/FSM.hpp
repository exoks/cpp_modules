//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########         < FSM.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/31 01:14:33 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/31 01:14:45 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
//====< FSM Class >=============================================================

# ifndef __FSM_HPP__
# define __FSM_HPP__
# include <iostream>

typedef enum	e_state
{
	START,
	CHAR,
	INT,
	OPERATOR,
	DOUBLE,
	FUTURE_DOUBLE,
	FLOAT,
	STRING,
	END,
}				t_state;

class	FSM
{
	private:
		FSM(void);
		static int	getNextState(int prv, char input);

	public:
		static int	detectType(std::string str);
};

#endif /*__FSM_HPP__*/
