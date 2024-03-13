//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Utils.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/12 17:55:11 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/12 17:55:11 by oezzaou
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
typedef std::vector<int>								v;
typedef std::vector<int>::iterator						vi;
typedef std::vector<std::pair<int, int > >				vp;
typedef std::vector<std::vector<std::pair<int, int> > >	vvp;

typedef std::vector<int>								l;
typedef std::vector<int>::iterator						li;
typedef std::list<std::pair<int, int > >				lp;
typedef std::list<std::list<std::pair<int, int> > >		llp;

//====< getIterator >===========================================================
template<class Container>
typename Container::iterator	getIterator(Container & c, int index)
{
	typename Container::iterator	iter;

	if (index < 0 && index >= static_cast<int>(c.size()))
		throw (Exception("Invalid index"));
	iter = c.begin();
	while (index-- > 0)
		iter++;
	return (iter);
}

// How to use Jacobsthal sequence in binary search
//====< binarySearch >==========================================================
/*template <class C>
typename C::iterator	binarySearch(C & c, int start, int end, int target)
{
	int		middle;

	middle = (start + end) / 2;
	if (start <= end && target > *getIterator(c, middle))
		return (binarySearch(c, ++middle, end, target));
	if (start <= end && target < *getIterator(c, middle))
		return (binarySearch(c, start, --middle, target));
	return (getIterator(c, start));
}*/

//====< binarySearch >==========================================================
template <class C>
typename C::iterator	binarySearch(C & c, int target)
{
	int	start, middle, end;

	start = 0;
	end = static_cast<int>(c.size()) - 1;
	while (start <= end)
	{
		std::cout << "+1" << std::endl;
		middle = (start + end) / 2;
		if (target < *getIterator(c, middle))
			end = middle - 1;
		if (target > *getIterator(c, middle))
			start = middle + 1;
	}
	return (getIterator(c, start));
}

# endif /*__UTILS_HPP__*/
