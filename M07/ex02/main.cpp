//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/23 22:30:27 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/23 22:30:31 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

//====< main >==================================================================
int main(int, char**)
{
    Array<int>	numbers(MAX_VAL);
    int			*mirror = new int[MAX_VAL];

	numbers[0] = 100;
	std::cout << numbers[0] << std::endl;
	int	tmp = numbers[0];
	std::cout << tmp << std::endl;
	srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
 
 	{
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return (EXIT_FAILURE);
        }
    }
    try {
        numbers[-2] = 0;
    } catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    try {
        numbers[MAX_VAL] = 0;
    } catch(const std::exception& e){
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
        numbers[i] = rand();
    delete [] mirror;
    return (EXIT_SUCCESS);
}
