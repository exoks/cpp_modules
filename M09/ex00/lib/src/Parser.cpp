//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < Parser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/23 21:42:32 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/23 21:42:32 by oezzaou
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
	std::stringstream	ss(strDate);
	int					ymd[3];
	std::string			buff;

	try {
		for (int i = 0; i < 4 && getline(ss, buff, '-'); i++)
		{
			if (i > 2 || buff.length() < 2)
				throw (std::out_of_range("Error: invalid format"));
			std::stringstream(buff) >> ymd[i];
		}
	} catch (std::exception & e){
		std::cout << e.what() << " => " << strDate << std::endl;
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

	if (FSM::detectType(sValue) != INT)
		throw (Exception("Parse Error: Not an Integer Value => " + sValue));
	if ((ss >> value) == NULL)
		throw (Exception("Parse Error: Too large number for Integer"));
	return (value);
}

//====< parse >=================================================================
double	prs::parse(double value, std::string sValue)
{
	std::stringstream	ss(sValue);

//	std::cout << "str : " << sValue << "$" << std::endl;
//	std::cout << "Type : " << FSM::detectType(sValue) << std::endl;
	if (FSM::detectType(sValue) != INT && FSM::detectType(sValue) != DOUBLE)
		throw (Exception("Parse Error: Not a double Value => " + sValue));
	if ((ss >> value) == NULL)
		throw (Exception("Error: Too large number for Double"));
	return (value);
}

//====< parse >=================================================================
std::string	prs::parse(std::string value, std::string sValue)
{
	value = sValue;
//	if (value.empty() == true)
//		throw (Exception("Parse Error: Empty string"));
	return (value);
}
