//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/19 17:47:16 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/23 17:04:19 by oezzaou
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
		std::string				fileName;

	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string fileName);
		BitcoinExchange(const BitcoinExchange & be);
		~BitcoinExchange(void);

		BitcoinExchange &	operator=(const BitcoinExchange & be);

		void				exchange(void);
};

#endif /*__BITCOINEXCHANGE_HPP__*/
