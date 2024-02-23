//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Utils.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/23 21:38:41 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/23 21:38:41 by oezzaou
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

typedef std::vector<std::vector<int> >	vv;

//===< getIterator >============================================================
vv::iterator	getIterator(vv & v, int index);
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
