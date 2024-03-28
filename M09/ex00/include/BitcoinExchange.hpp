//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/28 01:53:18 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/28 01:53:18 by oezzaou
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

class	BitcoinExchange
{
	private:
		BitcoinExchange(void);
//		std::string				fileName;

	public:
//		BitcoinExchange(std::string fileName);
//		BitcoinExchange(const BitcoinExchange & be);
//		~BitcoinExchange(void);

//		BitcoinExchange &	operator=(const BitcoinExchange & be);

		static void				exchange(std::string name);

		static bool				isValidExchangeDate(std::string exchangeDate);
		static bool				isValidExchangeValue(double exchangeValue);
};

#endif /*__BITCOINEXCHANGE_HPP__*/
