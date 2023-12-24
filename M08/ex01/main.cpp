//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/24 18:31:36 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/24 18:31:36 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Span.hpp"

//====< main >==================================================================
int	main(void)
{
	Span	s1(20100);

	try
	{
		for (int i = 0; i < 20000; i++)
			s1.addNumber(rand());
		std::cout << "longestSpan: "  << s1.longestSpan()	<< std::endl;
		std::cout << "shortestSpan: " << s1.shortestSpan()	<< std::endl;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
