//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/08 17:26:27 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/08 17:26:27 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#include "Base.hpp"

//====< main >==================================================================
int	main(void)
{
	Base	*ptr;
	Base	b;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	identify(NULL);
	identify(b);
	return (EXIT_SUCCESS);
}
