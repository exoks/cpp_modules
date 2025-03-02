//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀     𓐓  BitcoinExchange.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2024/03/31 01:52:14 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/03/02 09:18:16 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include "BitcoinExchange.hpp"

//====<[ constructor: ]>========================================================
BitcoinExchange::BitcoinExchange(void)
{
}

//====<[ checkHeader: ]>========================================================
bool	BitcoinExchange::checkHeader(std::string fileName)
{
	std::fstream	fs(fileName);

	return (prs::getNextLine(fs) == HEADER);
}

//====<[ checkDate: ]>==========================================================
bool	BitcoinExchange::checkDate(std::string sDate)
{
	Date	date;

	date = prs::parseDate(sDate);
	if (!prs::isValidDate(date) || prs::dateCmp(date, Date(2009, 1, 6)) == LESS)
		throw (Exception("Error: Invalid Date " + sDate));
	return (true);
}

//====<[ checkValue: ]>=========================================================
bool	BitcoinExchange::checkValue(double value)
{
	std::string	msg[2] = {"Not a positive number", "Too large number"};

	if (value < 0 || value > 1000)
		throw (Exception("Error: " + msg[value > 1000]));
	return (true);
}

//====< calculBalance >=========================================================
void	BitcoinExchange::calculBalance(DataBase db, DateValue dv)
{
	double	balance;

	balance = db.lower_bound(prs::trim(dv.first))->second * dv.second;
	std::cout << prs::trim(dv.first)  << " | "
			      << dv.second				    << " = "
			      << balance				      << std::endl;;
}

//====< exchange >==============================================================
void	BitcoinExchange::exchange(std::string fileName)
{
	prs::KeyValueParser<std::string, double, ','> data("data/data.csv");
	prs::KeyValueParser<std::string, double>      input(fileName);
	std::map<std::string, double>					        dataBase;
	std::pair<std::string, double>					      dateValue;

	dataBase = data.parseFile();
	if (checkHeader(fileName) == true)
		input.skipLine();
	while (true)
	{
		try
		{
			dateValue = input.parseNextLine();
			if (input.eof() == true)
				break ;
			if (checkDate(dateValue.first) && checkValue(dateValue.second))
				calculBalance(dataBase, dateValue);
		} catch(Exception & e){
			std::cout << e.what() << std::endl;
		}
	}
}
