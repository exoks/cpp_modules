//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/17 17:15:57 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/17 20:56:08 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
//==============================================================================

#ifndef __BITCOINEXCHANGE_HPP__
# define __BITCOINEXCHANGE_HPP__

# define VALID_ARGS		2

# include <map>
# include <iostream>
# include "Parser.hpp"

class	BitcoinExchange
{
	private:
		std::string					fileName;

	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string fileName);
		~BitcoinExchange(void);

		void	exchange(void);
};

#endif /*__BITCOINEXCHANGE_HPP__*/
