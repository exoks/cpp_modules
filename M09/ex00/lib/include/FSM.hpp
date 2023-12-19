//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########         < FSM.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/19 12:17:32 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/19 22:23:45 by oezzaou
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
