//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/08 15:49:03 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/08 15:50:07 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "PmergeMe.hpp"

//====< constructor >===========================================================
PmergeMe::PmergeMe(void)
{
}

//====< merge >=================================================================
void	PmergeMe::merge(std::vector<int> & v, int level, int len)
{
	int	index;

	index = level - 1;
	while (index < len)
	{
		if (index + level < len)
			swap_range(v, index, level);
//		index += (2 * level);
		index += (level * ((level != 1) + 1));
	}
}

//====< insertion >=============================================================


//====< mergeInsertion >========================================================
void	PmergeMe::mergeInsertion(std::vector<int> & v, int level, int len)
{
	if (level > len || level * 2 > len)
	{
//		insertion part
		return ;
	}
	merge(v, level, len);
	mergeInsertion(v, level << 1, len);
//	insert part
}
