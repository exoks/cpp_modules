//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########         < FSM.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/08 17:20:46 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/08 17:20:46 by oezzaou
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
	FUTURE_INT,
	DOUBLE,
	FUTURE_DOUBLE,
	FLOAT,
	STRING,
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
