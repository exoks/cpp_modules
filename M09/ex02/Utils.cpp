//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Utils.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/06 12:10:27 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/06 12:20:19 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Utils.hpp"

//====< toIterator >============================================================
std::vector<int>::iterator	getIterator(std::vector<int> & v, int index)
{
	if (index < 0 && index >= static_cast<int>(v.size()))
		throw (std::out_of_range("Invalid index"));
	return (v.begin() + index);
}

//====< toIterator >============================================================
std::list<int>::iterator	getIterator(std::list<int> & l, int index)
{
	std::list<int>::iterator	iter;

	if (index < 0 && index >= static_cast<int>(l.size()))
		throw (std::out_of_range("Invalid index"));
	iter = l.begin();
	while (index-- > 0)
		iter++;
	return (iter);
}
