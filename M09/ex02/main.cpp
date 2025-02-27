//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/05 22:35:40 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/05 22:37:19 by oezzaou
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

void	displayInfo(int size, std::string msg, t_ld reference1);

//====< main >==================================================================
int	main(int ac, char **av)
{
	t_ld										reference1, reference2;
	prs::PairParser<vvp, vp, POSITIVE, true>	vParser(ac, av);
	prs::PairParser<llp, lp, POSITIVE, true>	lParser(ac, av);
	vvp											c1;
	llp											c2;
	std::vector<int>							v;
	std::list<int>								l;
	std::string									msg[2] = {"false", "true"};

	try
	{
		//====< vector >=======================================================
		reference1 = prs::getTimeReference();
		c1 = vParser.parseArgs();
		
		v = PmergeMe::mergeInsertion(c1, 1, --ac / 2);
		reference1 = prs::getTimeToReference(reference1);

		//====< list >=========================================================
		reference2 = prs::getTimeReference();
		c2 = lParser.parseArgs();

		l = PmergeMe::mergeInsertion(c2, 1, ac / 2);
		reference2 = prs::getTimeToReference(reference2);

		//=============================================
		std::cout << "Before : ";
		for (int index = 1; av[index] != NULL; index++)
			std::cout << av[index] << " ";
		std::cout << std::endl;

		//=============================================
		std::cout << "After  : ";
		for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i)
			std::cout << *i << " ";
		std::cout << std::endl;

		std::cout << std::endl;
		displayInfo(v.size(), "std::vector", reference1);	
		displayInfo(l.size(), "std::list", reference2);

		std::cout	<< "std::vector| Sorted : "
					<< msg[std::is_sorted(v.begin(), v.end())] << std::endl;
		std::cout	<< "std::list  | Sorted : "
					<< msg[std::is_sorted(l.begin(), l.end())] << std::endl;
	} catch(Exception & e){
		std::cout << e.what() << std::endl;
		return (EXIT_FAILURE);
	}
	
	return (EXIT_SUCCESS);
}

//====< displayInfo >===========================================================
void	displayInfo(int size, std::string msg, t_ld time)
{
	std::cout	<< "> Time to process a range of "
				<< size				<< " with "
				<< std::setw(11)	<< msg << " : "
				<< std::fixed		<< std::setprecision(5)
				<< time				<< std::endl;
}
