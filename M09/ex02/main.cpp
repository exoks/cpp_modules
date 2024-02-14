//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/14 17:56:53 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/14 19:53:01 by oussama
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

//====< main >==================================================================
int	main(void)
{
	std::vector<int>	c;

	c.push_back(4);
	c.push_back(8);
	c.push_back(10);
	c.push_back(99);

	c.push_back(1);
	c.push_back(7);
	c.push_back(11);
	c.push_back(12);

//	c.push_back(3);
//	c.push_back(9);
//	c.push_back(20);
//	c.push_back(5);
	
//	c.push_back(18);
//	c.push_back(22);
//	c.push_back(19);

	std::cout << "=============================" << std::endl;
	for (std::vector<int>::iterator i = c.begin(); i != c.end(); ++i)
		std::cout << "value => " << *i << std::endl;

	PmergeMe::mergeInsertion(c, 1, c.size());

	std::cout << "=============================" << std::endl;
	for (std::vector<int>::iterator i = c.begin(); i != c.end(); ++i)
		std::cout << "value => " << *i << std::endl;

	return (EXIT_SUCCESS);
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
