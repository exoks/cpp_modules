//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########          < Date.h >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/03 17:30:49 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/03 17:30:49 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __DATE_HPP__
# define __DATE_HPP__

# include <iostream>
# include <ctime>
# include <sstream>
# include "FSM.hpp"
# include "Exception.hpp"
# include <sys/time.h>

typedef long double t_ld;

typedef enum	cmp
{
	GREATER,
	LESS,
	EQUAL
}				Cmp;

struct	Date
{
	int			year;
	int			month;
	int			day;

	Date(void);
	Date(int y, int m, int d);
};

namespace prs
{

	std::string	trim(std::string str);

	Date		parseDate(std::string sDate);
	
	bool		isValidDate(Date date);
	
	bool		isValidDate(std::string sDate);
	
	Date		getCurrentDate(void);
	
	int			dateCmp(Date d1, Date d2);

	t_ld		getTimeReference(void);

	t_ld		getTimeToReference(t_ld reference);
};

#endif /*__DATE_HPP__*/
