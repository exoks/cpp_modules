//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Span.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/28 15:20:19 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/28 15:55:40 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <exception>
# include <iostream>
# include <algorithm>
# include <vector>

class	Span
{
	private:
		unsigned int		N;
		std::vector<int>	v;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span & span);
		~Span(void);

		Span &	operator=(const Span & span);
		void	addNumber(int nbr);
		void	addNumbers(unsigned int range);
		int		longestSpan(void);
		int		shortestSpan(void);
};

#endif /*__SPAN_HPP__*/
