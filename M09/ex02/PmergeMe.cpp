//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########    < PmergeMe.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/08 19:52:19 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/08 19:52:19 by oezzaou
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
	int	i1,	i2;

	(void) i2;
	i1 = level - 1;
	while (i1 < len)
	{
		if (i1 + level < len)
			swap_range(v, i1, level);
		i1 += (2 * level);
	}
}

//		at level 4 we have to merge {a..b} {c.d}

//		index += (level * ((level != 1) + 1));
//====< insertion >=============================================================


//====< mergeInsertion >========================================================
void	PmergeMe::mergeInsertion(std::vector<int> & v, int level, int len)
{
	if (level > len)
	{
//		insertion part
		return ;
	}
	merge(v, level, len);
	mergeInsertion(v, level << 1, len);
//	insert part
}
