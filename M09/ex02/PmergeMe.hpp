//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/03/09 16:12:55 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/03/09 16:12:55 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __PMERGEME_HPP__
# define __PMERGEME_HPP__


# include <iostream>
# include "Utils.hpp"
# include "Parser.hpp"

static int	nbr;
// This class can be a template class in the end

class	PmergeMe
{
	private:
		PmergeMe(void);

	public:
		static void	merge(vvp & v, int level, int len);
		static std::vector<int>	insertion(vvp & v, int level);

		static std::vector<int>	mergeInsertion(vvp & v, int level, int size);
};

#endif /*__PMERGEME_HPP__*/
