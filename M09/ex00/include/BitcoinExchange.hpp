//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/19 22:51:43 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/19 22:51:43 by oezzaou
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
# include <map>
# include "Parser.hpp"

class	BitcoinExchange
{
	private:
		std::string					fileName;

	public:
		BitcoinExchange(void);
		BitcoinExchange(std::string fileName);
		BitcoinExchange(const BitcoinExchange & be);
		~BitcoinExchange(void);

		BitcoinExchange &	operator=(const BitcoinExchange & be);

		void				exchange(void);
};

#endif /*__BITCOINEXCHANGE_HPP__*/
