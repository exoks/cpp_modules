//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########          < Date.h >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/18 22:14:04 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/18 22:14:04 by oezzaou
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
	bool		isValidDate(Date date);
};

#endif /*__DATE_HPP__*/
