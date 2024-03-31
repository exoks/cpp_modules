//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/31 00:47:16 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/31 00:47:16 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
//====< BitcoinExchange Class >=================================================

#ifndef __BITCOINEXCHANGE_HPP__
# define __BITCOINEXCHANGE_HPP__

# define HEADER			"Date | Value"
# define VALID_ARGS		2

# include <iostream>
# include "Parser.hpp"
# include <fstream>

typedef std::map<std::string, double>		DataBase;
typedef std::pair<std::string, double>		DateValue;

class	BitcoinExchange
{
	private:
		BitcoinExchange(void);
		
		static bool			checkHeader(std::string fileName);

	public:
		static void			exchange(std::string fileName);

		static bool			checkDate(std::string exchangeDate);
		static bool			checkValue(double exchangeValue);
		static void			calculBalance(DataBase db, DateValue dv);
};

#endif /*__BITCOINEXCHANGE_HPP__*/
