//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+#####< BitcoinExchange.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/29 20:47:50 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/29 20:59:41 by oezzaou
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
	prs::KeyValueParser<std::string, double, ','>	data("data/data.csv");
	prs::KeyValueParser<std::string, double>		input(fileName);
	std::map<std::string, double>					dataBase;
	std::pair<std::string, double>					keyValue;

	dataBase = data.parseFile();
	while (true)
	{
		keyValue = input.parseNextLine();
		if (input.eof() == true)
			break ;
		if (isValidExchangeDate(keyValue.first) && isValidExchangeValue(keyValue.second))
		{
			std::cout << prs::trim(keyValue.first) << " | " << keyValue.second << " = ";
			std::cout << dataBase.lower_bound(prs::trim(keyValue.first))->second * keyValue.second;
			std::cout << std::endl;	
		}
	}
}
