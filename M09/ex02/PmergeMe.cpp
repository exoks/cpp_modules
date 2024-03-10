//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/10 20:01:15 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/10 21:33:05 by oezzaou
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

//====< insertion >=============================================================
std::vector<int>	PmergeMe::insertion(vvp & v, int len)
{
	std::vector<int>			main;
	std::vector<int>::iterator	iter;

	main.push_back(getIterator(v, 0)->begin()->first);
	for (int i = 0; i < len; i++)
		main.push_back(getIterator(v, i)->begin()->second);
	for (vvp::iterator i = v.begin() + 1; i != v.end(); ++i)
	{
		iter = binarySearch(main, 0, (int) main.size(), i->begin()->first);
	//	iter = lower_bound(main.begin(), main.end(), i->begin()->first, cmp);
		main.insert(iter, i->begin()->first);
	}
	return (main);
}

//====< mergeInsertion >========================================================
std::vector<int>	PmergeMe::mergeInsertion(vvp & v, int level, int len)
{
	if (level > len)
		return (insertion(v, len));
	merge(v, level, len);
	return (mergeInsertion(v, level << 1, len));
}















//==========================
bool	cmp(int a, int b)
{
	std::cout << "++++=1+" << std::endl;
	return (a < b);
}
