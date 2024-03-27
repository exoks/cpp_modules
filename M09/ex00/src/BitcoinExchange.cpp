//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/27 19:44:52 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/27 19:56:21 by oezzaou
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

//====< copy constructor >======================================================
BitcoinExchange::BitcoinExchange(const BitcoinExchange & be)
{
	*this = be;
}

//====< Destructor >============================================================
BitcoinExchange::~BitcoinExchange(void)
{
}

//====< operator= >=============================================================
BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange & be)
{
	this->fileName = be.fileName;
	return (*this);
}

//====< exchange >==============================================================
void	BitcoinExchange::exchange(void)
{
	prs::KeyValueParser<std::string, double, ','>		data("data/data.csv");
	prs::KeyValueParser<std::string, double>			input(fileName);
	std::map<std::string, double>						dataBase;
	std::pair<std::string, double>						kv;

	dataBase = data.parseFile();
	std::cout << "==================== after ======================" << std::endl;
	while (true)
	{
		kv = input.parseNextLine();
		if (input.eof() == true)
			break ;
		else if (prs::isValidDate(kv.first) == false)
			std::cout << "Error: bad input " + kv.first	<< std::endl;
//		else if (kv.second < 0 || kv.second > 1000)
//			std::cout << "Error: not a positive number" << std::endl;
		else
			std::cout	<< kv.first	<< " => " << kv.second << " = " 
						<< dataBase.lower_bound(kv.first)->second * kv.second
						<< std::endl;
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
