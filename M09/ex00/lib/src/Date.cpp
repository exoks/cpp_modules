//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Date.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/28 01:45:50 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/28 01:46:35 by oezzaou
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

//====< isValidDate >===========================================================
bool		prs::isValidDate(Date date)
{
	if (date.year < 1 || date.month < 1 || date.month > 12 || date.day < 1)
		return (false);
	if (compareToCurrentDate(date) == false)
		return (false);
	if (date.month <= 7 && date.day > 30 + date.month % 2)
		return (false);
	if (date.month >= 8 && date.day > 30 + !(date.month % 2))
		return (false);
	if (date.month == 2 && date.day > 28 + !(date.month % 4))
		return (false);
	return (true);
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
bool		prs::compareToCurrentDate(Date date)
{
	Date	cur;

	cur = getCurrentDate();
	if (date.year < cur.year)
		return (true);
	if (date.year == cur.year && date.month < cur.month)
		return (true);	
	if (date.year == cur.year && date.month == cur.month && date.day <= cur.day)
		return (true);
	return (false);
}

//====< compareDates >==========================================================
