//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/05 22:20:03 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/05 22:24:44 by oezzaou
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
void	PmergeMe::merge(vvp & v, int level, int len)
{
	int		s1,	s2, e;
	vvp		tmp;

	for (int m = level - 1; m < len - 1; m += (level << 1))
	{
		s1 = m - level + 1;
		s2 = m + 1;
		e = (m + level < len) ? m + level: len - 1; 
		while (s1 <= m && s2 <= e)
		{
			int	res = getPair(v, s1).second - getPair(v, s2).second;
			tmp.push_back(*toIter(v, (res <= 0) ? s1++: s2++));
		}
		while (s1 <= m || s2 <= e)
			tmp.push_back(*toIter(v, (s1 > m) ? s2++ : s1++));
	}
	for (unsigned int index = 0; index < tmp.size(); ++index)
		std::swap(*toIter(v, index), *toIter(tmp, index));

}

//====< insertion >=============================================================
std::vector<int>	PmergeMe::insertion(vvp & v)
{
	int						range, prev(1), curr(1);
	std::vector<int>		main;

	for (int i = 0; i < static_cast<int>(v.size()); ++i)
		pushToMainChain(v, main, i);
	while (prev < static_cast<int>(v.size()))
	{
		curr = getNextJacobsthalNbr(v, curr, prev);
		range = static_cast<int>(main.size());
		for (int index = curr - 1; index > prev - 1; --index)
			insertToMainChain(main, range, getPair(v, index).first);
		std::swap(prev, curr);
	}
	return (main);
}

//====< mergeInsertion >========================================================
std::vector<int>	PmergeMe::mergeInsertion(vvp & v, int level, int len)
{
	if (level > len)
		return (insertion(v));
	merge(v, level, len);
	return (mergeInsertion(v, level << 1, len));
}

//==============================================================================
//==============================================================================

//====< mergeInsertion >========================================================
std::list<int>	PmergeMe::mergeInsertion(llp & l, int level, int len)
{
	if (level > len)
		return (insertion(l));
	merge(l, level, len);
	return (mergeInsertion(l, level << 1, len));
}

//====< insertion >=============================================================
std::list<int>	PmergeMe::insertion(llp & l)
{
	int					range, prev(1), curr(1);
	std::list<int>		main;

	for (int i = 0; i < static_cast<int>(l.size()); ++i)
		pushToMainChain(l, main, i);
	while (curr < static_cast<int>(l.size()))
	{
		curr = getNextJacobsthalNbr(l, curr, prev);
		range = static_cast<int>(main.size());
		for (int index = curr - 1; index > prev - 1; --index)
			insertToMainChain(main, range, getPair(l, index).first);
		std::swap(prev, curr);
	}
	return (main);
}

//====< merge >=================================================================
void	PmergeMe::merge(llp & l, int level, int len)
{
	int		s1,	s2, e;
	llp		tmp;

	for (int m = level - 1; m < len - 1; m += (level << 1))
	{
		s1 = m - level + 1;
		s2 = m + 1;
		e = (m + level < len) ? m + level: len - 1;
		while (s1 <= m && s2 <= e)
		{
			int	res = getPair(l, s1).second - getPair(l, s2).second;
			tmp.push_back(*toIter(l, (res <= 0) ? s1++: s2++));
		}
		while (s1 <= m || s2 <= e)
			tmp.push_back(*toIter(l, (s1 > m) ? s2++ : s1++));
	}
	for (unsigned int index = 0; index < tmp.size(); ++index)
		std::swap(*toIter(l, index), *toIter(tmp, index));

}
