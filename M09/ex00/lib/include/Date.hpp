//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########          < Date.h >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/19 22:40:19 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/19 22:40:19 by oezzaou
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

# include <ctime>

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
	Date		getCurrentDate(void);
	bool		isValidDate(Date date);
	bool		compareToCurrentDate(Date date);
};

#endif /*__DATE_HPP__*/
