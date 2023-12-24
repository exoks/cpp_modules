//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 18:27:14 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 18:27:37 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	b0("b0", -1);
	Bureaucrat	b1("b1", 20);

	std::cout << "============= b0 ================" << std::endl;
	std::cout << b1;
	std::cout << "======== increment to 1 =========" << std::endl;
	for (int i = 0; i < 19; i++)
		b1.incrementGrade();
	std::cout << "============= b1 ================" << std::endl;
	std::cout << b1;
	std::cout << "======== decrement to 150 =======" << std::endl;
	for (int i = 0; i < 150; i++)
		b1.decrementGrade();
	std::cout << b1;
	return (EXIT_SUCCESS);
}
