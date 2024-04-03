//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/03 22:54:33 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/03 22:54:33 by oezzaou
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

void	display(vvp & c1);

//==========================
bool	cmp(int a, int b)
{
	std::cout << "+1" << std::endl;
	return (a < b);
}

void	displayInfo(int size, std::string msg, t_ld reference1);
//====< main >==================================================================
int	main(int ac, char **av)
{
	prs::PairParser<vvp, vp, POSITIVE, true>	vParser(ac, av);
//	prs::PairParser<llp, lp, POSITIVE, true>	lParser(ac, av);
	vvp											c1;
	llp											c2;
	std::vector<int>							v;
	std::list<int>								l;
	t_ld										reference1;//reference2;

	try
	{
		//=============================================
//		std::cout << "Before : ";
//		for (int index = 1; av[index] != NULL; index++)
//			std::cout << av[index] << " ";
//		std::cout << std::endl;

		//====< vector >=======================================================
		reference1 = prs::getTimeReference();
		c1 = vParser.parseArgs();

		v = PmergeMe::mergeInsertion(c1, 1, --ac / 2);
		reference1 = prs::getTimeToReference(reference1);

		//====< list >=========================================================
//		reference2 = prs::getTimeReference();
//		c2 = lParser.parseArgs();

//		l = PmergeMe::mergeInsertion(c2, 1, ac / 2);
//		reference2 = prs::getTimeToReference(reference2);
		
		//=============================================
//		std::cout << "After  : ";
//		for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
//			std::cout << *i << " ";
//		std::cout << std::endl;

//		std::cout << std::endl;
		displayInfo(v.size(), "std::vector", reference1);	
//		displayInfo(l.size(), "std::list", reference2);

//		std::cout << "|isSorted~~~>> " << std::is_sorted(v.begin(), v.end()) << std::endl;
	} catch(Exception & e){
		std::cout << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	
//	display(c1);
	
	return (EXIT_SUCCESS);
}

void	displayInfo(int size, std::string msg, t_ld time)
{
	std::cout	<< "> Time to process a range of "
				<< size				<< " with "
				<< std::setw(11)	<< msg << " : "
				<< std::fixed		<< std::setprecision(5)
				<< time				<< std::endl;
}

/*void	display(vvp & c1)
{
	std::cout << "==================== c1 ================" << std::endl;
	for (vvp::iterator i = c1.begin(); i != c1.end(); ++i)
		std::cout	<< "("	<< i->begin()->first
					<< ", "
					<< i->begin()->second
					<< ")"	<< std::endl;
	std::cout << "===============================================" << std::endl;
}*/

































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
