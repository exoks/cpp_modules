//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/14 19:53:49 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/14 19:55:33 by oussama
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
	int	s1, m, s2, e;
	int	ref;

	(void) v;
	std::cout << "===========" << level << "===========" << std::endl;
	m = level - 1;
	e = len - (len % 2);
	while (m < len)
	{
		s1 = m - (level > 1) * (level - 2);
		s2 = m + 1 + (level > 1);
		ref = s2 + level;
		while (s1 <= m && s2 <= e)
		{
			// try to swap a pair each time but make the main pair in the middle of the vector
			if (*getIterator(v, s1) > *getIterator(v, ref))
			{
				swap_range(v, s1, ref, 1 + (level > 1));
				++s2 += (level > 1);
			}
			if (*getIterator(v, s2) >= *getIterator(v, ref))
			{
				swap_range(v, s2, ref, 1 + (level > 1));
				++s1 += (level > 1);
			}
		}
		m += (2 * level);
	}
}

//			if (swap_range(v, s1, s2, 1 + (level > 1)) == false)
//				++s1 += (level > 1);
//			else if (swap_range(v, s1, s2, 1 + (level > 1)) == true)
//				++s2 += (level > 1);
//====< insertion >=============================================================


//====< mergeInsertion >========================================================
void	PmergeMe::mergeInsertion(std::vector<int> & v, int level, int len)
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
