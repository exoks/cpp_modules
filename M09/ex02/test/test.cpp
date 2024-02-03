//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < test.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/03 20:25:55 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/03 20:25:55 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include <iostream>
# include <vector>

//==============================================================================
void	fun(int level, int len);
void	swap_pairs(std::vector<int> & v, int level, int len);

//====< main >==================================================================
int	main(void)
{
	std::vector<int>	v;

	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(2);
	
	swap_pairs(v, 1, 4);
	
	for (int index = 0; index < 4; ++index)
		std::cout << v[index] << std::endl;
	return (EXIT_SUCCESS);
}

//====< fun >===================================================================
void	fun(int level, int len)
{
	int	pair_size;

	pair_size = (1 << level);
	if (pair_size > len || pair_size * 2 > len)
		return ;
	std::cout << pair_size << std::endl;
	fun(++level, len);
	// swap pairs each time depend on the level
	// can't be called in case of pair_size > len || pair_size * 2 > len
}

//====< swap >==================================================================
void	swap_pairs(std::vector<int> & v, int level, int len)
{
	int	pair_size;
	int	index;
	int	tmp;

	pair_size = (1 << level);
	index = pair_size - 1;
	std::cout << "tmp : " << v[index] << std::endl;
	while (index < len && index + pair_size < len)
	{
		v[index] = tmp; 
		v[index] = v[index + pair_size];
		v[index + pair_size] = tmp;
		index += pair_size;
	}
	for (int i = 0; i < 4; ++i)
		std::cout << "index : " << v[i] << std::endl;
}

//	std::cout << "===> " << index << std::endl;
//	std::cout << "===> " << index + pair_size << std::endl;

/*
void	merge(std::vector<int> & v, int step)
{
	if (v.size() / step < 2)
		return ;
	merge(v, step * 2);
	// i know the step so i have to split between the main chaine and pend
	// move and swap between the two paires
}
*/
