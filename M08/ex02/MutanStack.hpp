//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < MutanStack.hpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/12 11:42:03 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/12 11:42:03 by oezzaou
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

// add container as parametre
template <class Type>
class	MutanStack
{
	private:
		std::deque<Type>	s;
		
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
				bool		operator!=(const iterator & it)
				{
					return (iter != it.iter);
				}
		};

		void		push(Type element);
		void		pop(void);
		int			size(void);
		Type		top(void);

		iterator	begin(void);
		iterator	end(void);
};

# include "MutanStack.tpp"

#endif /*__MUTANSTACK_HPP__*/
