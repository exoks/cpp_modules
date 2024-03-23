//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/20 22:32:13 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/20 22:32:13 by oezzaou
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
	BitcoinExchange	bitcoin;

	if (ac != VALID_ARGS)
	   return (EXIT_FAILURE);	
	try
	{
		bitcoin = BitcoinExchange(*++av);
		bitcoin.exchange();
	} catch(Exception & e){
		std::cout << e.what() << std::endl; 
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
