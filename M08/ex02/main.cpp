//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/12 22:56:57 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/12 22:56:57 by oezzaou
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
# include <stack>

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
	std::cout << "hello world" << std::endl;
	std::cout << "begin: " << *i << std::endl;
	std::cout << *(++i) << std::endl;
//	std::cout << "end:   " << *ms.end() << std::endl;
//	bool b = ms.begin() != ms.end();
//	std::cout << "diff: " << b << std::endl;

//	std::stack<int> s(ms);
	return (EXIT_SUCCESS);
}
