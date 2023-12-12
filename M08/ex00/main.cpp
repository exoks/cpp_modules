//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/10 11:25:50 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/10 11:25:50 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
 
# include "easyfind.hpp"

//====< main >==================================================================
int	main(void)
{
	std::vector<int> v;

	v.push_back(0);
	v.push_back(3);
	v.push_back(2);
	v.push_back(7);

	easyfind(v, 3);
	easyfind(v, 9);

	return (EXIT_SUCCESS);
}
