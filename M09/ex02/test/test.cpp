//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < test.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/05 20:45:56 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/05 20:46:08 by oussama
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
	mergeInsertion(v, ++level, len);
//	insertion operation
}

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
			swap_range(v, index, step);
		index += (step + 1);
	}
}

//: to make this function works as expected with the list and vector i have to pass index as an argument
//: function must use iterator instead of index
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
