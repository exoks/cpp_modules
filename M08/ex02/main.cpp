//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/13 16:26:18 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/13 16:38:56 by oussama
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
	--i;
	++i;
	std::cout << *i << std::endl;
	bool b = ms.begin() != ms.end();
	std::cout << "diff: " << b << std::endl;

	std::stack<int> s(ms);
	return (EXIT_SUCCESS);
}
