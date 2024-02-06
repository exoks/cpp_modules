//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/05 21:06:01 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/05 21:06:01 by oussama
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
# include <vector>
# include <list>

class	PmergeMe
{
	private:

	public:
		PmergeMe(void);
		void	merge(std::vector<int> & v, int level, int len);
//		void	insert(arguments);

		void	mergeInsertion(std::vector<int> & v, int level, int size);
};

std::vector<int>::iterator	toIterator(std::vector<int> & v, int index);
std::list<int>::iterator	toIterator(std::list<int> & v, int index);

bool				swap_range(std::vector<int> & v, int level, int size);

#endif /*__PMERGEME_HPP__*/
