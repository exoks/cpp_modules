//               ################                                                         
//             ####################                                                       
//           ########################                                                     
//          #############+########### #                                                   
//          ######-..        .+########   < Span.hpp >                                    
//          ####-..            ..+####                                                    
//          ###-...             .-####                                                    
//          ###...              ..+##      Student: oussama <oezzaou@student.1337.ma>     
//           #-.++###.      -###+..##                                                     
//           #....  ...   .-.  ....##         Created: 2023/12/07 19:41:31 by oezzaou     
//        --.#.-#+## -..  -+ ##-#-.-...       Updated: 2023/12/07 19:41:31 by oezzaou     
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
		~Span(void);

		Span &	operator=(const Span & span);
		void	addNumber(int nbr);
};

#endif /*__SPAN_HPP__*/
