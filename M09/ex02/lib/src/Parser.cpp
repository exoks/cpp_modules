//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########      < Parser.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/19 20:10:41 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/26 14:15:39 by oezzaou
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
