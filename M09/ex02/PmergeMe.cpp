//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/16 21:30:43 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/16 21:30:43 by oezzaou
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

//	std::cout << "================(" << level << ")==============" << std::endl;
//	std::cout << "===================> buff" << std::endl;
//			for (vvp::iterator i = tmp.begin(); i != tmp.end(); ++i)
//				std::cout << "(" << i->begin()->first << ", " << i->begin()->second << ")" << std::endl;

// Don't forget to think of another way wihtout using tmp container
// !!!: take the right postion of each one and then swap them
//====< merge >=================================================================
void	PmergeMe::merge(vvp & v, int level, int len)
{
	int	s1,	s2, e;
	vvp			tmp;

	for (int m = level - 1; m < len - 1; m += (level << 1))
	{
		s1 = m - level + 1;
		s2 = m + 1;
		e = (m + level < len) ? m + level: len - 1; 
		while (s1 <= m || s2 <= e)
		{
			if (s1 <= m && s2 > e)
				tmp.push_back(*getIterator(v, s1++));
			else if (s1 > m && s2 <= e)
				tmp.push_back(*getIterator(v, s2++));
			else if (getIterator(v, s1)->begin()->second < getIterator(v, s2)->begin()->second)
			{
				std::cout << "+1" << std::endl;
				tmp.push_back(*getIterator(v, s1++));
			}
			else if (getIterator(v, s2)->begin()->second < getIterator(v, s1)->begin()->second)
			{
				std::cout << "+1" << std::endl;
				tmp.push_back(*getIterator(v, s2++));
			}
		}
	}
	for (unsigned int i = 0; i < tmp.size(); ++i)
		std::swap(*getIterator(v, i), *getIterator(tmp, i));
}

bool	cmp(int a, int b);

#include <unistd.h>

//====< insertion >=============================================================
std::vector<int>	PmergeMe::insertion(vvp & v, int len)
{
	int							prev(1), curr(1), bi;
	std::vector<int>			main;
	std::vector<int>::iterator	iter;

	len = static_cast<int>(v.size());
	main.push_back(getIterator(v, 0)->begin()->first);
	while (curr < len)
	{
		curr = (JK(curr, prev) >= len) ? len: JK(curr, prev);
		for (int index = prev - 1; index < curr - 1; ++index)
			if (getIterator(v, index)->begin()->second > -1)
				main.push_back(getIterator(v, index)->begin()->second);
		for (int index = curr - 1; index > prev - 1; --index)
		{
			bi = getIterator(v, index)->begin()->first;
			iter = lower_bound(main.begin(), main.end() - curr + index + 1, bi, cmp);
			main.insert(iter, bi);
		}
		std::swap(prev, curr);

	}
	return (main);
}

// 0 :=> 2	<< 0 1
// 2 :=> 4	<< 2 3
// 4 :=> 10	<< 4 5 6 7 8 9
//====< mergeInsertion >========================================================
std::vector<int>	PmergeMe::mergeInsertion(vvp & v, int level, int len)
{
	if (level > len)
		return (insertion(v, len));
	merge(v, level, len);
	return (mergeInsertion(v, level << 1, len));
}

//	for (int index = 0; index < len; ++index)
//		if (getIterator(v, index)->begin()->second > -1)
//			main.push_back(getIterator(v, index)->begin()->second);
//		std::cout << "==========(" << curr << ")==========" << std::endl;

//			std::cout << "     ==========      " << std::endl;
//			if (getIterator(v, prev - 1 + curr - index)->begin()->second > -1)
//				main.push_back(getIterator(v, prev - 1 + curr - index)->begin()->second);

//			std::cout << "index : " << curr - 1 - index << std::endl;

//			std::cout << "inserting : " << getIterator(v, index)->begin()->first << std::endl;

/*
		std::cout << "================ main =================" << std::endl;
		for (int index = 0; index < (int) main.size(); ++index)
			std::cout << "main :=> " << main[index] << std::endl;
		std::cout << "=======================================" << std::endl;
*/









//==========================
bool	cmp(int a, int b)
{
	std::cout << "+1" << std::endl;
	return (a < b);
}
