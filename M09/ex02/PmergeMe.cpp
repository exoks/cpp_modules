//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/26 14:37:51 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/26 14:37:51 by oezzaou
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
	int	s1, m, s2;

	std::cout << "================(" << level << ")==============" << std::endl;
	m = level - 1;
	while (m < len)
	{
		s1 = m - level + 1;
		s2 = m + 1;
		while (s1 <= m + 1 && s2 < len)
		{
			(void) v;
			++s2;
		}
		m += (level << 1);
	}
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
