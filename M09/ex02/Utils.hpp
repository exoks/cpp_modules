//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Utils.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/14 19:13:07 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/14 19:13:07 by oussama
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __UTILS_HPP__
# define __UTILS_HPP__
# include <vector>
# include <list>

//typedef enum	Mode
//{
//	ACCENDING,
//	DECENDING
//}		Mode;

//===< getIterator >============================================================
std::vector<int>::iterator	getIterator(std::vector<int> & v, int index);
std::list<int>::iterator	getIterator(std::list<int> & l, int index);

//====< swap_range >============================================================
template <class container>
bool	swap_range(container & v, int s1, int s2, int range)
{
	typename container::iterator	i1, i2;

	i1 = getIterator(v, s1);
	i2 = getIterator(v, s2);
	while (range-- > 0)
		std::swap(*i1--, *i2--);
	return (true);
}

# endif /*__UTILS_HPP__*/
