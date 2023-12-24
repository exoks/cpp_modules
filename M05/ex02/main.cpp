//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/22 18:47:53 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/22 18:49:28 by oezzaou
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
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

//====< main >==================================================================
int	main(void)
{
	SCForm		scform("scform");
	RRForm		rrform("rrform");
	PPForm		ppform("ppform");

	std::cout << "========== ShrubberyCreationForm ==========" << std::endl;
	Bureaucrat("oussama", 5).executeForm(scform);
	Bureaucrat("oussama", 5).signForm(scform);
	Bureaucrat("oussama", 150).executeForm(scform);
	Bureaucrat("oussama", 5).executeForm(scform);

	std::cout << std::endl;
	std::cout << "=========== RobotomyRequestForm ===========" << std::endl;
	Bureaucrat("oussama", 5).executeForm(rrform);
	Bureaucrat("oussama", 5).signForm(rrform);
	Bureaucrat("oussama", 150).executeForm(rrform);
	Bureaucrat("oussama", 5).executeForm(rrform);

	std::cout << std::endl;
	std::cout << "========== PresidentialPardonForm =========" << std::endl;
	Bureaucrat("oussama", 5).executeForm(ppform);
	Bureaucrat("oussama", 5).signForm(ppform);
	Bureaucrat("oussama", 150).executeForm(ppform);
	Bureaucrat("oussama", 5).executeForm(ppform);

	return (EXIT_SUCCESS);
}
