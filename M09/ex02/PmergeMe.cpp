//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/03 23:29:38 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/03 23:53:18 by oezzaou
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

// if the middle is at the end we should break from the loop (!!!: end is related to the last pair)
//		std::cout << ":=> e1 " << m << std::endl << ":=> e2 " << m + level << std::endl;
//====< merge >=================================================================
void	PmergeMe::merge(vvp & v, int level, int len)
{
	int	s1,	s2;
	vvp	tmp;

	// detect the end is not len - 1
	std::cout << "================(" << level << ")==============" << std::endl;
	for (int m = level - 1; m < len - 1; m += (level << 1))
	{
		s1 = m - level + 1;
		s2 = m + 1;
		while (s1 <= m || s2 <= m + level)
		{
			if (s1 <= m && s2 > m + level)
				tmp.push_back(*getIterator(v, s1++));
			else if (s2 > m && s2 <= m + level)
				tmp.push_back(*getIterator(v, s2++));
			else if (getIterator(v, s1)->begin()->second < getIterator(v, s2)->begin()->second)
				tmp.push_back(*getIterator(v, s1++));
			else if (getIterator(v, s2)->begin()->second < getIterator(v, s1)->begin()->second)
				tmp.push_back(*getIterator(v, s2++));
		}
	}	

	// Copy to main vector v
	std::cout << "=================== buff ======================" << std::endl;
			for (vvp::iterator i = tmp.begin(); i != tmp.end(); ++i)
				std::cout << "(" << i->begin()->first << ", " << i->begin()->second << ")" << std::endl;
}

//====< insertion >=============================================================

//====< mergeInsertion >========================================================
void	PmergeMe::mergeInsertion(vvp & v, int level, int len)
{
	if (level > len)
	{
//		insertion part
		return ;
	}
	merge(v, level, len);
	mergeInsertion(v, level << 1, len);
//	insert part
}


//			if (s1 > m)
//				std::swap(*getIterator(v, s2++), tmp);
//			else if (s2 >= len)
//				std::swap(*getIterator(v, s1++), tmp);
//			if (getIterator(v, s1)->begin()->second > tmp.begin()->second)
//			{
//			   	std::swap(*getIterator(v, s1), tmp);
//				++s1;
//			}
//			else if (getIterator(v, s1)->begin()->second == tmp.begin()->second)
//				++s1;
//			else if (getIterator(v, s2)->begin()->second == tmp.begin()->second)
//				++s2;
//			else if (getIterator(v, s2)->begin()->second > tmp.begin()->second)
//			{
//				std::swap(*getIterator(v, s2), tmp);
//				++s2;
//			}












































//====< mergeInsertion >========================================================
/*void	PmergeMe::mergeInsertion(std::vector<int> & v, int level, int len)
{
	if (level > len)
	{
//		insertion part
		return ;
	}
	merge(v, level, len);
	mergeInsertion(v, level << 1, len);
//	insert part
}*/


//====< merge >=================================================================
/*void	PmergeMe::merge(std::vector<int> & v, int level, int len)
{
	int	s1, m, s2, e;
	std::vector<int>	tmp;

	(void) v;
	std::cout << "=========== " << level << " ===========" << std::endl;
	m = level - 1;
	e = len - (len % 2);
	while (m < len)
	{
		s1 = m - (level > 1) * (level - 2);
		s2 = m + 1 + (level > 1);
		if (level > 1)
			tmp.push_back(s2 - 1);
		tmp.push_back(s2);
		while (s1 <= m && s2 < e)
		{
			if (*getIterator(v, s1) > *getIterator(tmp, 1 + (level > 1)))
			{
				++s2 += (level > 1);
			}
			if (*getIterator(v, s2) >= *getIterator(tmp, 1 + (level > 1))
			{
				++s1 += (level > 1);
			}
		}
		m += (2 * level);
	}
}*/


//			if (swap_range(v, s1, s2, 1 + (level > 1)) == false)
//				++s1 += (level > 1);
//			else if (swap_range(v, s1, s2, 1 + (level > 1)) == true)
//				++s2 += (level > 1);
