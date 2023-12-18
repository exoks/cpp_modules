//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Date.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/18 22:12:56 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/18 22:12:56 by oezzaou
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
	if (date.year < 1)
		return (false);
	if (date.month < 1 || date.month > 12)
		return (false);
	if (date.month <= 7 && date.day > 30 + date.month % 2)
		return (false);
	if (date.month >= 8 && date.day > 30 + !(date.month % 2))
		return (false);
	if (date.month == 2 && date.day > 28 + !(date.month % 4))
		return (false);
	return (true);
}
