//               ################                                                         
//             ####################                                                       
//           ########################                                                     
//          #############+########### #                                                   
//          ######-..        .+########   < Span.hpp >                                    
//          ####-..            ..+####                                                    
//          ###-...             .-####                                                    
//          ###...              ..+##      Student: oussama <oezzaou@student.1337.ma>     
//           #-.++###.      -###+..##                                                     
//           #....  ...   .-.  ....##         Created: 2023/12/07 18:45:13 by oussama     
//        --.#.-#+## -..  -+ ##-#-.-...       Updated: 2023/12/07 18:45:13 by oussama     
//         ---....... ..  ........... -                                                   
//         -+#..     ..   .       .+-.                                                    
//          .--.     .     .     ..+.                                                     
//            -..    .+--.-.     ...                                                      
//            +.... .-+#.#+.    ..-                                                       
//             +...#####-++###-..-                                                        
//             #---..----+--.---+##                                                       
//           ###-+--.... ....--+#####                                                     
//     ##########--#-.......-#-###########        Made By Oussama Ezzaou <OEZZAOU> :)     

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <exception>
# include <iostream>
# include <vector>

class	Span
{
	private:
		unsigned int		N;
		std::vector<int>	*v;
	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span & span);
		// destructor
	
		Span &	operator=(const Span & span);
};

#endif /*__SPAN_HPP__*/
