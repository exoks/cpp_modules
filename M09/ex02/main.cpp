//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/24 15:07:35 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/24 15:07:42 by oezzaou
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

void	ss(std::vector<int>::iterator & i1, std::vector<int>::iterator & i2, int range);

//====< main >==================================================================
int	main(void)
{
	vv	c;

	c.push_back(std::vector<int>(1, 7));
	c.push_back(std::vector<int>(8, 10));

	c.push_back(std::vector<int>(10, 99));
	c.push_back(std::vector<int>(4, 8));

//	c.push_back(std::vector<int>(3, 9));
//	c.push_back(std::vector<int>(20, 5));

//	c.push_back(std::vector<int>(18, 22));
//	c.push_back(std::vector<int>(19));

	PmergeMe::mergeInsertion(c, 1, c.size());
 	
	std::cout << "=============================" << std::endl;
//	for (vv::iterator i = c.begin(); i != c.end(); ++i)
//		std::cout << "value => " << "hello" << std::endl;

	return (EXIT_SUCCESS);
}

void	ss(std::vector<int>::iterator & i1, std::vector<int>::iterator & i2, int range)
{
	while (range-- > 0)
		std::swap(*i1--, *i2--);
}

/*
void	merge_arr(std::vector<int> &v, int m, int len, int level)
{
	int	i1, i2;

	(void) len;
	i1 = m - (level > 1) * (level - 2);
	i2 = m + 1 + (level > 1);
	while (i1 <= m && i2 <= m + level)
	{
		if (swap_range(v, i1, i2, 1 + (level > 1)) == false)
			++i1 += (level > 1);
		if (swap_range(v, i1, i2, 1 + (level > 1)) == true)
			++i2 += (level > 1);
	}
}
*/
//	std::cout << "==========(" << level << ")=============" << std::endl;
//	std::cout << "middle : " << *getIterator(v, m) << std::endl;
//	std::cout << "next   : " << *getIterator(v, m + level) << std::endl;
