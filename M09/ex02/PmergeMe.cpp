//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/02 22:36:45 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/02 22:36:45 by oezzaou
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
			tmp.push_back(*getIterator(v, (res < 0) ? s1++ : s2++));
		}
		while (s1 <= m || s2 <= e)
			tmp.push_back(*getIterator(v, (s1 > m) ? s2++ : s1++));
	}
	for (unsigned int i = 0; i < tmp.size(); ++i)
		std::swap(*getIterator(v, i), *getIterator(tmp, i));
}

//====< insertion >=============================================================
std::vector<int>	PmergeMe::insertion(vvp & v)
{
	int						range, prev(1), curr(1);
	std::vector<int>		main;

	while (curr < static_cast<int>(v.size()))
	{
		curr = getNextJacobsthalNbr(v, curr, prev);
		for (int index = prev - 1; index < curr - 1; ++index)
			pushToMainChain(v, main, index);
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

// print the data as requested
// use another container
// clean l code
