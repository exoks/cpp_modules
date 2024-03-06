//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/06 15:47:17 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/06 15:47:17 by oezzaou
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

// Don't forget to think of another way wihtout using tmp container
//====< merge >=================================================================
void	PmergeMe::merge(vvp & v, int level, int len)
{
	int	s1,	s2, e;
	vvp	tmp;

	std::cout << "================(" << level << ")==============" << std::endl;
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
				tmp.push_back(*getIterator(v, s1++));
			else if (getIterator(v, s2)->begin()->second < getIterator(v, s1)->begin()->second)
				tmp.push_back(*getIterator(v, s2++));
		}
	}	

	for (unsigned int i = 0; i < tmp.size(); ++i)
		std::swap(*getIterator(v, i), *getIterator(tmp, i));

	std::cout << "===================> buff" << std::endl;
			for (vvp::iterator i = tmp.begin(); i != tmp.end(); ++i)
				std::cout << "(" << i->begin()->first << ", " << i->begin()->second << ")" << std::endl;
}

//====< insertion >=============================================================
void	PmergeMe::insertion(vvp & v, int level, int len)
{
	(void) v;
	(void) level;
	(void) len;

	// insert the pend chaine into main chaine using insertion algorithm
	// forget : i have to find out how to make it without using lower_bound
};

void insertionTest(vvp & v, int len);

//====< mergeInsertion >========================================================
void	PmergeMe::mergeInsertion(vvp & v, int level, int len)
{
	if (level > len)
	{
//		insertionTest(v, len);
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
