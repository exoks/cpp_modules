//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/21 20:51:52 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/21 20:51:52 by oussama
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "Bureaucrat.hpp"

//====< main >==================================================================
int	main(void)
{
	Bureaucrat	bureaucrat("oussama", 20);
	Form		ds("ds 260", 20, 150);
	Form		work("work", 10, 150);

	std::cout << "========== (ds 260 form) ==========" << std::endl;
	std::cout << ds;
	bureaucrat.signForm(ds);
	std::cout << ds;
	bureaucrat.signForm(ds);

	std::cout << "\n=========== (work form) ===========" << std::endl;
	std::cout << work;
	bureaucrat.signForm(work);
	std::cout << work;
	return (EXIT_SUCCESS);
}
