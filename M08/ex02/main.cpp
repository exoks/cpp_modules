//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/12 11:40:46 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/12 11:40:46 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "MutanStack.hpp"

//====< main >==================================================================
int	main(void)
{
	MutanStack<int>	ms;

	ms.push(20);
	ms.push(17);

	std::cout 	<< "==================================" << std::endl
				<< "Size: "		<< ms.size()
				<< std::endl
				<< "Top: "		<< ms.top()
				<< std::endl	<< std::endl;	
	ms.pop();
	
	std::cout 	<< "==================================" << std::endl
				<< "Size: "		<< ms.size()
				<< std::endl
				<< "Top: "		<< ms.top()
				<< std::endl	<< std::endl;

	ms.push(10);
	MutanStack<int>::iterator i;

	i = ms.begin();
	std::cout << "begin: " << *i << std::endl;
	std::cout << "end:   " << *ms.end() << std::endl;
	bool b = ms.begin() != ms.end();
	std::cout << "diff: " << b << std::endl;
	return (EXIT_SUCCESS);
}
