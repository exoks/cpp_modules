//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Utils.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/26 14:29:28 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/26 14:29:28 by oezzaou
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

# include <list>
# include <vector>
# include "FSM.hpp"
# include "Exception.hpp"

//====< typedef >===============================================================
typedef std::vector<std::pair<int, int > >				vp;
typedef std::vector<std::vector<std::pair<int, int> > >	vvp;

typedef std::list<std::pair<int, int > >				lp;
typedef std::list<std::list<std::pair<int, int> > >		llp;

//====< getIterator >===========================================================
std::list<int>::iterator	getIterator(std::list<int> & l, int index);
vvp::iterator				getIterator(vvp & v, int index);

//====< swap_range >============================================================
/*template <class container>
bool	swap_range(container & v, int s1, int s2, int range)
{
	typename container::iterator	i1, i2;

	i1 = getIterator(v, s1);
	i2 = getIterator(v, s2);
	while (range-- > 0)
		std::swap(*i1--, *i2--);
	return (true);
}*/

# endif /*__UTILS_HPP__*/
