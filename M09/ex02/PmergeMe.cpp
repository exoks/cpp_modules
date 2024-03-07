//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/07 17:46:42 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/07 17:46:42 by oezzaou
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

int number = 0;
//====< constructor >===========================================================
PmergeMe::PmergeMe(void)
{
}

// Don't forget to think of another way wihtout using tmp container
// !!!: take the right postion of each one and then swap them
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

//	std::cout << "===================> buff" << std::endl;
//			for (vvp::iterator i = tmp.begin(); i != tmp.end(); ++i)
//				std::cout << "(" << i->begin()->first << ", " << i->begin()->second << ")" << std::endl;
}

//==========================
bool	cmp(int a, int b)
{
	number++;
	return (a < b);
}

//====< insertion >=============================================================
void	PmergeMe::insertion(vvp & v, int len)
{
	std::vector<int>	main;
	vi					it;

	main.push_back(getIterator(v, 0)->begin()->first);
	for (int i = 0; i < len; i++)
		main.push_back(getIterator(v, i)->begin()->second);

	for (vvp::iterator i = v.begin() + 1; i != v.end(); ++i)
	{
		it = std::lower_bound(main.begin(), main.end(), i->begin()->first);
		// understand this line
		main.insert(it, i->begin()->first);
		// needs to be swaped
	}

	std::cout << "====================================" << std::endl;
	for (vi i = main.begin(); i != main.end(); ++i)
		std::cout << " => " << *i << std::endl;
}

//====< mergeInsertion >========================================================
void	PmergeMe::mergeInsertion(vvp & v, int level, int len)
{
	if (level > len)
	{
		insertion(v, len);
		return ;
	}
	merge(v, level, len);
	mergeInsertion(v, level << 1, len);
}
