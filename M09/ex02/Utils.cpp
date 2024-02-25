//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Utils.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/25 22:07:59 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/25 22:07:59 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Utils.hpp"
# include <iostream>
# include <sstream>

//====< parseInput >============================================================
vvp	parseInput(vvp & v, int ac, char **av)
{
	int		tmp[2];

	for (int i = 1; i < ac; i += 2)
	{
		vp	unit;
		for (int j = 0; j < 2 && i + j < ac; j++)
		{
			if (FSM::detectType(av[i + j]) != INT)
				throw (Exception("mergeInsertion: invalid argument"));
			std::stringstream(av[i + j]) >> tmp[j];
		}
		unit.push_back(std::pair<int, int>(tmp[0], tmp[1]));
		v.push_back(unit);
	}
	return (v);
}

//====< parseInput >============================================================
llp	parseInput(llp & l, int ac, char **av)
{
	int		tmp[2];

	for (int i = 1; i < ac; i += 2)
	{
		lp	unit;
		for (int j = 0; j < 2 && i + j < ac; j++)
		{
			if (FSM::detectType(av[i + j]) != INT)
				throw (Exception("mergeInsertion: invalid argument"));
			std::stringstream(av[i + j]) >> tmp[j];
		}
		unit.push_back(std::pair<int, int>(tmp[0], tmp[1]));
		l.push_back(unit);
	}
	return (l);
}

//====< toIterator >============================================================
vvp::iterator	getIterator(vvp & v, int index)
{
	if (index < 0 && index >= static_cast<int>(v.size()))
		throw (std::out_of_range("Invalid index"));
	return (v.begin() + index);
}

//====< toIterator >============================================================
std::list<int>::iterator	getIterator(std::list<int> & l, int index)
{
	std::list<int>::iterator	iter;

	if (index < 0 && index >= static_cast<int>(l.size()))
		throw (std::out_of_range("Invalid index"));
	iter = l.begin();
	while (index-- > 0)
		iter++;
	return (iter);
}
