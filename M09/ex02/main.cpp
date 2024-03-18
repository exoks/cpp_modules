//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/18 21:50:46 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/18 21:50:46 by oezzaou
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

void	display(vvp & container);

//==========================
bool	cmp(int a, int b)
{
	std::cout << "+1" << std::endl;
	return (a < b);
}


//====< main >==================================================================
int	main(int ac, char **av)
{
	prs::PairParser<vvp, vp, POSITIVE, true>	parser(ac, av);
	vvp											container;
	int											vpSize;
	std::vector<int>							v;

	try
	{
		container = parser.parseArgs();
		vpSize = --ac / 2;

//		display(container);

		v = PmergeMe::mergeInsertion(container, 1, vpSize);

		for (int i = 0; i < (int) v.size(); ++i)
			std::cout << " => " << v[i] << std::endl;
		
		std::cout << "|isSorted~~~>> " << std::is_sorted(v.begin(), v.end()) << std::endl;
	} catch(Exception & e){
		std::cout << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	
//	display(container);
	
	return (EXIT_SUCCESS);
}

void	display(vvp & container)
{
	std::cout << "==================== container ================" << std::endl;
	for (vvp::iterator i = container.begin(); i != container.end(); ++i)
		std::cout	<< "("	<< i->begin()->first
					<< ", "
					<< i->begin()->second
					<< ")"	<< std::endl;
	std::cout << "===============================================" << std::endl;
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
