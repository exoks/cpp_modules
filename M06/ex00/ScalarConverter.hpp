//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< ScalarConverter.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/23 20:38:29 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/23 20:38:29 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __SCALARCONVERTER_HPP__
# define __SCALARCONVERTER_HPP__

# include "FSM.hpp"
# include <sstream>
# include <iomanip>
# include <cstdlib>

class	ScalarConverter
{
	public:
		static void	convert(std::string input);
};

void	toChar(std::string input, int type);
void	toInt(std::string input, int type);
void	toDouble(std::string input, int type);
void	toFloat(std::string input, int type);

#endif /*__SCALARCONVERTER_HPP__*/
