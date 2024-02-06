//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########   < insertion.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2024/02/06 14:57:02 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2024/02/06 14:57:02 by oezzaou
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

int	main(void)
{
	std::vector<int>	v;
	int					tmp;

	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	v.push_back(0);
	
	for (int i = 0; i < 4; i++)
	{
		if (i < 3 && v[i] > v[i + 1])
		{
			tmp = v[i];
			v[i] = v[i + 1];
			v[i + 1] = tmp;
		}
		
		for (int j = i; j > 0; j--)
		{
			if (v[j - 1] > v[j])
			{
				tmp = v[j];
				v[j] = v[j - 1];
				v[j - 1] = tmp;
			}
		}
	}

	for (int i = 0; i < 4; i++)
		std::cout << v[i] << std::endl;
	return (0);
}
