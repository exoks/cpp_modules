//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/08 17:24:28 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/08 17:24:28 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#include "Serializer.hpp"

//====< main >==================================================================
int	main(void)
{
	Data		data;
	uintptr_t	ptr;
	Data		*dataPtr;
	
	data.name = "oussama";
	data.id = 1;
	dataPtr = &data;

	std::cout << "DataPtr: " << dataPtr << std::endl;
	ptr = Serializer::serialize(dataPtr);
	std::cout << "UIntPtr: " << ptr << std::endl;
	dataPtr = Serializer::deserialize(ptr);
	std::cout << "DataPtr: " << dataPtr << std::endl;
	return (EXIT_SUCCESS);
}
