//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/05 20:52:51 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/05 20:52:51 by oussama
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "PmergeMe.hpp"

//====< constructor >===========================================================
PmergeMe::PmergeMe(void)
{
}

//====< merge >=================================================================
void	PmergeMe::merge(std::vector<int> & v, int level, int len)
{
	int							step(1);
	int							index(-1);

	step <<= level;
	index += step;
	while (index < len)
	{
		if (index + step < len)
			swap_range(v, index, step);
		index += (step + 1);
	}
}

//====< mergeInsertion >==================================================
void	PmergeMe::mergeInsertion(std::vector<int> & v, int level, int len)
{
	int	pair_size;

	pair_size = (1 << level);
	if (pair_size > len || pair_size * 2 > len)
		return ;
	merge(v, level, len);
	mergeInsertion(v, ++level, len);
//	insertion operation
}

//: to make this function works as expected with the list and vector i have to pass index as an argument
//: function must use iterator instead of index
//====< swap_range >============================================================
bool	swap_range(std::vector<int> & v, int start, int range)
{
	std::vector<int>::iterator	s1, s2;
	int				tmp;

	s1 = toIterator(v, start);
	s2 = toIterator(v, start + range);
	if (*s1 < *s2)
		return (false);
	std::cout << *s1 << std::endl << *s2 << std::endl;
	while (range-- > 0)
	{
// 		std::swap(s1, s2);
		tmp = *s1;
// why it does not segv ?
		*s1-- = *s2;
		*s2-- = tmp;
	}
	return (true);
}

//====< toIterator >============================================================
std::vector<int>::iterator	toIterator(std::vector<int> & v, int index)
{
	// throw some exception in case of index < 0
	return (v.begin() + index);
}

//====< toIterator >============================================================
std::list<int>::iterator	toIterator(std::list<int> & v, int index)
{
	std::list<int>::iterator	iter;

	// throw some exception in case of index < 0
	iter = v.begin();
	for (int i = 0; i <= index; ++i)
		iter++;
	return (iter);
}

