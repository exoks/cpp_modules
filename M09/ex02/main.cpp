//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/05 21:05:37 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/05 21:05:40 by oussama
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
	std::vector<int>	v;
	PmergeMe		m;

	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	v.push_back(1);

//	v.push_back(2);
//	v.push_back(7);
//	v.push_back(8);
//	v.push_back(9);

	m.mergeInsertion(v, 0, 4);

	std::cout << "=============================" << std::endl;
	for (int index = 0; index < 4; ++index)
		std::cout << v[index] << std::endl;

	return (EXIT_SUCCESS);
}
