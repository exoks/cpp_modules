//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/04/03 18:45:20 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/04/03 18:45:20 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
//====< PmergeMe class >========================================================

#ifndef __PMERGEME_HPP__
# define __PMERGEME_HPP__

# include <iostream>
# include "Parser.hpp"
# include "Utils.hpp"

# define JK(PREV, CURR) (PREV * 2) + CURR

class	PmergeMe
{
	private:
		PmergeMe(void);

	public:
		static void				merge(vvp & v, int level, int len);
		static std::vector<int>	insertion(vvp & v);

		static std::vector<int>	mergeInsertion(vvp & v, int level, int size);

		static std::list<int>	mergeInsertion(llp & l, int level, int size);
		
		static std::list<int>	insertion(llp & l);
		static void				merge(llp & l, int level, int len);
};

#endif /*__PMERGEME_HPP__*/
