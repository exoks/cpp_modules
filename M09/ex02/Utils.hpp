//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Utils.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/01 19:55:29 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/01 19:55:29 by oezzaou
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

//====< getPair >===============================================================
template<class Container>
std::pair<int, int>	getPair(Container & c, int index)
{
	if (index < 0 && index >= static_cast<int>(c.size()))
		throw (Exception("Invalid index"));
	return (*getIterator(c, index)->begin());
}

//====< updateMainChaine >======================================================
template<class Container, class Unit>
void	pushToMainChain(Container & c, Unit & unit, int index)
{
	if (index == 0)
		unit.push_back(getPair(c, index).first);
	if (getPair(c, index).second > -1)
		unit.push_back(getPair(c, index).second);
}

bool	cmp(int a, int b);
//====< insertToMainChain >=====================================================
template<class Unit>
void	insertToMainChain(Unit & unit, int range, int target)
{
	typename Unit::iterator	end;

	end = getIterator(unit, range);	
	unit.insert(std::lower_bound(unit.begin(), end, target, cmp), target);
}

//====< getNextJacobsthalNbr > =================================================
template<class Container>
int	getNextJacobsthalNbr(Container & c, int prev, int curr)
{
	int		nextNbr;

	nextNbr = (2 * prev) + curr;
	if (nextNbr > static_cast<int>(c.size()))
		return (static_cast<int>(c.size()));
	return (nextNbr);
}

# endif /*__UTILS_HPP__*/
