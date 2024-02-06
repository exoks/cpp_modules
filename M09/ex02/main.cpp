//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/06 12:22:25 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/06 12:23:04 by oezzaou
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

	c.push_back(9);
	c.push_back(8);
	c.push_back(7);
	c.push_back(6);

	c.push_back(5);
	c.push_back(4);
	c.push_back(3);
	c.push_back(2);

	c.push_back(10);
	c.push_back(0);
	PmergeMe::mergeInsertion(c, 1, c.size());

	std::cout << "=============================" << std::endl;
	for (std::vector<int>::iterator i = c.begin(); i != c.end(); ++i)
		std::cout << "value => " << *i << std::endl;

	return (EXIT_SUCCESS);
}
