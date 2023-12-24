//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < MutanStack.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/24 20:21:05 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/24 20:21:53 by oezzaou
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
# include <deque>

template <class Type>
class	MutanStack : public std::stack<Type>, public std::deque<Type>
{
	public:
		class	iterator
		{
			private:
				typename std::deque<Type>::iterator iter;

			public:
				iterator (void);
				iterator (typename std::deque<Type>::iterator iter);

				iterator &	operator++();
				iterator &	operator--();
				Type		operator*(void);
				bool		operator!=(const MutanStack<Type>::iterator & it);
		};
};

# include "MutanStack.tpp"

#endif /*__MUTANSTACK_HPP__*/
