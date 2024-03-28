//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < Parser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/28 00:19:04 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/28 00:19:04 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Parser.hpp"

//====< parseDate >=============================================================
Date	prs::parseDate(std::string strDate)
{
	std::stringstream	ss(prs::trim(strDate));
	std::string			buff;
	int					ymd[3];
	unsigned int		maxSize;

	for (int index = 0; index < 4 && ss.eof() == false; index++)
	{
		getline(ss, buff, '-');
		maxSize = 2 * (2 - !!index);
		if (FSM::detectType(buff) != INT || index > 2 || buff.size() > maxSize)
			throw (Exception("Parse Error: Invalid format > " + strDate));
		std::stringstream(buff) >> ymd[index];
	}
	return (Date(ymd[0], ymd[1], ymd[2]));
}

//====< isValidDate >===========================================================
bool		prs::isValidDate(std::string strDate)
{
	return (isValidDate(parseDate(strDate)));
}

//====< trim >==================================================================
std::string 	prs::trim(std::string str)
{
	int		start;
	int		end;

	start = 0;
	end = str.length() - 1;
	while (start <= end && str[start] == ' ')
		start++;
	while (end >= 0 && str[end] == ' ')
	  	end--;
	return (str.substr(start, end - start + 1));
}

//====< parse >=================================================================
int	prs::parse(int value, std::string sValue)
{
	std::stringstream	ss(sValue);
	int					type;

	type = FSM::detectType(sValue);
	if (type == START)
		throw (Exception("Parse Error: Empty value > " + sValue));
	if (type != INT && type != DOUBLE)
		throw (Exception("Parse Error: Not a Integer value > " + sValue));
	if ((ss >> value) == NULL)
		throw (Exception("Error: Too large number for Double"));
	return (value);
}

//====< parse >=================================================================
double	prs::parse(double value, std::string sValue)
{
	std::stringstream	ss(sValue);
	int					type;

	type = FSM::detectType(sValue);
	if (type == START)
		throw (Exception("Parse Error: Empty value > " + sValue));
	if (type != INT && type != DOUBLE)
		throw (Exception("Parse Error: Not a double value > " + sValue));
	if ((ss >> value) == NULL)
		throw (Exception("Error: Too large number for Double"));
	return (value);
}

//====< parse >=================================================================
std::string	prs::parse(std::string value, std::string sValue)
{
	value = sValue;
	if (value.empty() == true)
		throw (Exception("Parse Error: Empty string"));
	return (value);
}
