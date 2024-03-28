//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/28 01:53:06 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/28 01:53:06 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "BitcoinExchange.hpp"

int	main(int ac, char **av)
{
//	BitcoinExchange	bitcoin;

	if (ac != VALID_ARGS)
	   return (EXIT_FAILURE);	
	try
	{
//		bitcoin = BitcoinExchange(*++av);
		BitcoinExchange::exchange(*++av);
	} catch(Exception & e){
		std::cout << e.what() << std::endl; 
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
