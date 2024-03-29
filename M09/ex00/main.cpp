//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/29 20:49:58 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/29 20:50:10 by oezzaou
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
	if (ac != VALID_ARGS)
	   return (EXIT_FAILURE);
	try
	{
		BitcoinExchange::exchange(*++av);
	} catch (std::exception & e){
		std::cout << e.what() << std::endl; 
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
