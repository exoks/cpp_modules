//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/28 01:53:56 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/28 01:53:56 by oezzaou
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
/*BitcoinExchange::BitcoinExchange(std::string fileName)
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
}*/

//====< isValidExchangeDate >===================================================
bool	BitcoinExchange::isValidExchangeDate(std::string sDate)
{
	Date	date;

	try
	{
		date = prs::parseDate(sDate);
		if (!prs::isValidDate(date) || !prs::compareToCurrentDate(date))
			throw (Exception("Error: Invalid Date " + sDate));
	} catch(Exception & e){
		std::cout << e.what() << std::endl;
		return (false);
	}
	return (true);
}

//====< isValidExchangeValue >==================================================
bool	BitcoinExchange::isValidExchangeValue(double value)
{
	if (value < 0)
		return (std::cout << "Error: not a positive number" << std::endl, false);
	if (value > 1000)
		return (std::cout << "Error: too large number" << std::endl, false);
	return (true);
}

//====< exchange >==============================================================
void	BitcoinExchange::exchange(std::string fileName)
{
	prs::KeyValueParser<std::string, double, ','>		data("data/data.csv");
	prs::KeyValueParser<std::string, double>			input(fileName);
	std::map<std::string, double>						dataBase;
	std::pair<std::string, double>						kv;

	dataBase = data.parseFile();
	while (true)
	{
		kv = input.parseNextLine();
		if (input.eof() == true)
			break ;
		if (isValidExchangeDate(kv.first) && isValidExchangeValue(kv.second))
		{
			std::cout << prs::trim(kv.first) << " | " << kv.second << " = ";
			std::cout << dataBase.lower_bound(prs::trim(kv.first))->second * kv.second;
			std::cout << std::endl;	
		}
	}
}
