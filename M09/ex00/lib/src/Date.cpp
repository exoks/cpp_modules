//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Date.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/31 01:31:06 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/31 01:31:06 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Date.hpp"

//====< struct constructor >====================================================
Date::Date(void)
{
}

//====< structor constructor >==================================================
Date::Date(int y, int m, int d) : year(y), month(m), day(d)
{
}

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
bool		prs::isValidDate(Date date)
{
	if (date.year < 1 || date.month < 1 || date.month > 12 || date.day < 1)
		return (false);
	if (dateCmp(date, getCurrentDate()) == GREATER)
		return (false);
	if (date.month <= 7 && date.day > 30 + date.month % 2)
		return (false);
	if (date.month >= 8 && date.day > 30 + !(date.month % 2))
		return (false);
	if (date.month == 2 && date.day > 28 + !(date.month % 4))
		return (false);
	return (true);
}

//====< isValidDate >===========================================================
bool	prs::isValidDate(std::string strDate)
{
	return (isValidDate(parseDate(strDate)));
}

//====< getCurrentDate >========================================================
Date	prs::getCurrentDate(void)
{
    std::time_t 	t;;
    std::tm* 		time;

	t = std::time(0);
	time = std::localtime(&t);
	time->tm_year += 1900;
	time->tm_mon += 1;
	return (Date(time->tm_year, time->tm_mon, time->tm_mday));
}

//====< compareToCurrentTime >==================================================
int		prs::dateCmp(Date d1, Date d2)
{
	if (d1.year < d2.year)
		return (LESS);
	if (d1.year == d2.year && d1.month < d2.month)
		return (LESS);	
	if (d1.year == d2.year && d1.month == d2.month && d1.day <= d2.day)
		return (LESS);
	return (GREATER);
}
