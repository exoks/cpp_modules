//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < MutanStack.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/27 16:45:25 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/28 15:51:30 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

#ifndef __MUTANSTACK_HPP__
# define __MUTANSTACK_HPP__
# include <iostream>
# include <exception>
# include <algorithm>
# include <stack>

template <class Type>
class	MutanStack : public std::stack<Type>
{
	public:
		class	iterator
		{
			private:
				typename std::stack<int>::container_type::iterator iter;

			public:
				iterator (void);
				iterator (typename std::stack<Type>::container_type::iterator iter);

				iterator &	operator++(void);
				iterator &	operator--(void);
				Type		operator*(void);
				bool		operator!=(const MutanStack<Type>::iterator & iter);
		};

		iterator	begin(void);
		iterator	end(void);
};

# include "MutanStack.tpp"

#endif /*__MUTANSTACK_HPP__*/
