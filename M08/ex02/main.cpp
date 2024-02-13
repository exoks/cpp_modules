//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/27 16:44:25 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/27 16:44:25 by oezzaou
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
	std::string		boolVal[2] = {"false", "true"};
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
	std::cout << "========" << std::endl;
	std::cout << "begin: " << *i << std::endl;
	--i;
	++i;
	std::cout << *i << std::endl;
	bool b = ms.begin() != ms.end();
	std::cout << "compaire between end and begin: " << boolVal[b] << std::endl;

	std::stack<int> s(ms);
	return (EXIT_SUCCESS);
}
