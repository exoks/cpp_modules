//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/17 18:21:24 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/17 18:28:09 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "BitcoinExchange.hpp"

//====< constructor >===========================================================
BitcoinExchange::BitcoinExchange(void)
{
}

//====< constructor >===========================================================
BitcoinExchange::BitcoinExchange(std::string fileName)
{
	this->fileName = fileName;
}

//====< Destructor >============================================================
BitcoinExchange::~BitcoinExchange(void)
{
}

//====< exchange >==============================================================
void	BitcoinExchange::exchange(void)
{
	prs::KeyValueParser<std::string, int, ','>	data("data/data.csv");
	prs::KeyValueParser<std::string, int>		input(fileName);
	std::map<std::string, int>					map;

	map = input.parseFile();
	std::map<std::string, int>::iterator it;
	for (it = map.begin(); it != map.end(); ++it)
	{
		std::cout << it->first << "$" << std::endl;
	}
}




















































/*
//====< constructor >===========================================================
BitcoinExchange::BitcoinExchange(std::string fileName)
{
	this->fileName = fileName;
}

//====< setFileName >===========================================================
void		BitcoinExchange::setFileName(std::string fileName)
{
	this->fileName = fileName;
}

//====< getFileName >===========================================================
std::string	BitcoinExchange::getFileName(void) const
{
	return (fileName);
}
*/
