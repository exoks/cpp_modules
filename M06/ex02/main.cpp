//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/23 20:06:08 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/23 20:06:25 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Base.hpp"
# include <unistd.h>

//====< main >==================================================================
int	main(void)
{
	Base	*ptr;
	Base	b;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	
	sleep(1);
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	
	sleep(1);
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;

	identify(NULL);
	identify(b);
	return (EXIT_SUCCESS);
}
