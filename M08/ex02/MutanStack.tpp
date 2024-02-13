//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < MutanStack.tpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/27 16:45:17 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/27 16:45:37 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

//====< iterator constructor >==================================================
template <class Type>
MutanStack<Type>::iterator::iterator(void)
{
}

//====< iterator constructor >==================================================
template <class Type>
MutanStack<Type>::iterator::iterator(typename std::stack<Type>::container_type::iterator iter)
{
	this->iter = iter;
}

//====< operator++ >============================================================
template <class Type>
typename MutanStack<Type>::iterator & MutanStack<Type>::iterator::operator++(void)
{
	return (--iter, *this);
}

//====< operator-- >============================================================
template <class Type>
typename MutanStack<Type>::iterator & MutanStack<Type>::iterator::operator--(void)
{
	return (++iter, *this);
}

//====< operator!= >============================================================
template <class Type>
bool MutanStack<Type>::iterator::operator!=(const MutanStack<Type>::iterator & it)
{
	return (this->iter != it.iter); 
}

//====< operator* >=============================================================
template <class Type>
Type	MutanStack<Type>::iterator::operator*(void)
{
	return (*(this->iter));
}

//====< begin >=================================================================
template <class Type>
typename MutanStack<Type>::iterator	MutanStack<Type>::begin(void)
{
	return (iterator(std::stack<Type>::c.begin()));
}

//====< end >===================================================================
template <class Type>
typename MutanStack<Type>::iterator	MutanStack<Type>::end(void)
{
	return (iterator(std::stack<Type>::c.end()));
}
