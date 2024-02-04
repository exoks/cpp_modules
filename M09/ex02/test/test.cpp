//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < test.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/04 13:24:29 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/04 13:26:34 by oezzaou
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
void	fordJhonsonAlgorithm(std::vector<int> & v, int level, int len);
void	merge(std::vector<int> & v, int level, int len);

//====< main >==================================================================
int	main(void)
{
	std::vector<int>	v;

	v.push_back(2);
	v.push_back(1);
	v.push_back(4);
	v.push_back(3);
	v.push_back(5);

//	v.push_back(2);
//	v.push_back(7);
//	v.push_back(8);
//	v.push_back(9);

//	fordJhonsonAlgorithm(v, 1, v.size());


	merge(v, 1, 5);
	for (int index = 0; index < v.size(); ++index)
		std::cout << v[index] << std::endl;

	return (EXIT_SUCCESS);
}

//====< fordJhonsonAlgorithm >==================================================
void	fordJhonsonAlgorithm(std::vector<int> & v, int level, int len)
{
	int	pair_size;

	pair_size = (1 << level);
	if (pair_size > len || pair_size * 2 > len)
		return ;
	fordJhonsonAlgorithm(v, ++level, len);
}

//====< merge >=================================================================
void	merge(std::vector<int> & v, int level, int len)
{
	int							step(1);
	int							index(-1);

	step <<= level;
	index += step;
	while (index < len)
	{
		if (index + step < len)
			;//swap_range(v, v.begin() + index, step);
		index += (step + 1);
	}
}

//: function must use iterator instead of index
//====< swap_range >============================================================
bool	swap_range(std::vector<int> & v, std::vector<int>::iterator s, int range)
{
	return (true);
}
