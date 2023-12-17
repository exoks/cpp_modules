//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < Parser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/17 20:51:51 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/17 20:51:51 by oezzaou
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
std::array<int, 3>	prs::parseDate(std::string date)
{
	std::stringstream	ss(date);
	std::array<int, 3>	ymd;
	std::string			buff;

	try {
		for (int i = 0; i < 3 && std::getline(ss, buff, '-'); i++)
		{
			if (!(std::stringstream(buff) >> ymd[i]))
				throw (std::out_of_range(">>> Invalid Date"));
		}
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (ymd);
}

//====< isValidDate >===========================================================
bool		prs::isValidDate(std::array<int, 3> date)
{
	if (date[YEAR] < 1)
		return (false);
	if (date[MONTH] < 1 || date[MONTH] > 12)
		return (false);
	if (date[MONTH] <= 7 && date[DAY] > 30 + date[MONTH] % 2)
		return (false);
	if (date[MONTH] >= 8 && date[DAY] > 30 + !(date[MONTH] % 2))
		return (false);
	if (date[MONTH] == 2 && date[DAY] > 28 + !(date[YEAR] % 4))
		return (false);
	return (true);	
}

//====< trim >==================================================================
std::string 	prs::trim(std::string str)
{
	std::string	s;

	s += "hello world";
	return (str);
}
