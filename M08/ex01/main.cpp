//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/28 16:01:08 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/28 16:01:25 by oezzaou
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
	Span	s0(5);
	Span	s1(20100);
	Span	s2(2);

	s0.addNumber(6);
	s0.addNumber(3);
	s0.addNumber(17);
	s0.addNumber(9);
	s0.addNumber(11);

	std::cout << "longestSpan: "  << s0.longestSpan()	<< std::endl;
	std::cout << "shortestSpan: " << s0.shortestSpan()	<< std::endl;
	try
	{
		s2.longestSpan();
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	s2.addNumber(20);
	try
	{
		s2.shortestSpan();
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	std::cout << "====================================" << std::endl;
	try
	{
		s1.addNumbers(10000);
		std::cout << "longestSpan: "  << s1.longestSpan()	<< std::endl;
		std::cout << "shortestSpan: " << s1.shortestSpan()	<< std::endl;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return (EXIT_SUCCESS);
}
