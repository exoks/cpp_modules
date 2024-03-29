//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/29 20:47:13 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/29 20:47:13 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __BITCOINEXCHANGE_HPP__
# define __BITCOINEXCHANGE_HPP__

# define VALID_ARGS		2

# include <iostream>
# include "Parser.hpp"
# include <fstream>

class	BitcoinExchange
{
	private:
		BitcoinExchange(void);

	public:
		static void				exchange(std::string fileName);

		static bool				isValidExchangeDate(std::string exchangeDate);
		static bool				isValidExchangeValue(double exchangeValue);
};

#endif /*__BITCOINEXCHANGE_HPP__*/
