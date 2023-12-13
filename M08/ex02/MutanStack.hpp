//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < MutanStack.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/13 16:43:38 by oussama
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/13 16:43:38 by oussama
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
# include <deque>

template <class Type>
class	MutanStack : public std::deque<Type>
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

		void		push(Type element);
		void		pop(void);
		Type		top(void);
};

# include "MutanStack.tpp"

#endif /*__MUTANSTACK_HPP__*/
