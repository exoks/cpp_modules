//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########          < Date.h >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/30 22:04:27 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/30 22:04:27 by oezzaou
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
