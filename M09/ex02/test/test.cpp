//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < test.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/26 15:01:29 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/26 15:54:49 by oezzaou
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

void	merge(std::vector<int> v, int step);

int	main(void)
{
	std::vector<int>	v(6);

	merge(v, 2);
	return (0);
}


void	merge(std::vector<int> & v, int step)
{
	if (v.size() / step < 2)
		return ;
	merge(v, step * 2);
	// i know the step so i have to split between the main chaine and pend
	// move and swap between the two paires
}
