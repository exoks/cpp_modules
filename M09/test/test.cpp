//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < test.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/10 11:27:24 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/10 11:27:27 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include <iostream>
# include <vector>
# include <list>

//==============================================================================
void	mergeInsertion(std::vector<int> & v, int level, int len);
void	merge(std::vector<int> & v, int level, int len);

std::vector<int>::iterator	toIterator(std::vector<int> & v, int index);
std::list<int>::iterator	toIterator(std::list<int> & v, int index);

bool	swap_range(std::vector<int> & v, int start, int range);

//====< main >==================================================================
int	main(void)
{
	std::vector<int>	v;

	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

//	v.push_back(2);
//	v.push_back(7);
//	v.push_back(8);
//	v.push_back(9);

	mergeInsertion(v, 0, 4);

	std::cout << "=============================" << std::endl;
	for (int index = 0; index < v.size(); ++index)
		std::cout << v[index] << std::endl;

	return (EXIT_SUCCESS);
}

//====< mergeInsertion >==================================================
void	mergeInsertion(std::vector<int> & v, int level, int len)
{
	int	pair_size;

	pair_size = (1 << level);
	if (pair_size > len || pair_size * 2 > len)
		return ;
	merge(v, level, len);
	mergeInsertion(v, level, len);
//	insertion operation
}

void	merge_arr(std::vector<int> &v, int m, int end, int level);
//====< merge >=================================================================
void	merge(std::vector<int> & v, int level, int len)
{
	int							step(1);
	int							index(-1);

	step <<= level;
	index += step;
	while (index < len)
	{
		if (index + step < len)
			merge_arr(v, index, index + step, level);
		index += (2 * step);
	}
}

void	merge_arr(std::vector<int> &v, int m, int end, int level)
{
	int	s1, s2;

	std::cout << "==============(" << level << ")=================" << std::endl;
	s1 = (level > 1);
	s2 = m + ((level > 1) + 1);
	while (s1 <= m && s2 <= end)
	{
		if (toIterator(v, s1) < toIterator(v, s2))
		{
			std::cout << "swap : " << *toIterator(v, s1) << std::endl;
			std::cout << "=> swap : " << *toIterator(v, s2) << std::endl;
			s1 += 2;
		}
		else
		{
			std::cout << "swap : " << *toIterator(v, s1) << std::endl;
			std::cout << "=> swap : " << *toIterator(v, s2) << std::endl;
			s2 += 2;
		}
	}
}

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
