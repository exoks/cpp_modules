//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < MutanStack.tpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/12 11:44:03 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/12 12:15:52 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

// add container as parametre
//====< push >==================================================================
template <class Type>
void	MutanStack<Type>::push(Type element)
{
	s.push_back(element);
}

//====< pop >===================================================================
template <class Type>
void	MutanStack<Type>::pop()
{
	try
	{
		if (s.size() == 0)
			throw (std::out_of_range("empty stack."));
		s.pop_back();
	} catch (std::exception & e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

//====< size >==================================================================
template <class Type>
int		MutanStack<Type>::size(void)
{
	return (s.size());
}

//====< top >===================================================================
template <class Type>
Type		MutanStack<Type>::top(void)
{
	try 
	{
		if (s.size() == 0)
			throw (std::out_of_range("empty stack."));
		return (s.back());
	} catch (std::exception & e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}

//====< iterator constructor >==================================================
template<class Type>
MutanStack<Type>::iterator::iterator(void)
{
}

//====< iterator constructor >==================================================
template<class Type>
MutanStack<Type>::iterator::iterator(typename std::deque<Type>::iterator iter)
{
	this->iter = iter;
}

//====< begin >=================================================================
template <class Type>
typename MutanStack<Type>::iterator	MutanStack<Type>::begin(void)
{	
	return (iterator(--s.end()));
}

//====< end >===================================================================
template <class Type>
typename MutanStack<Type>::iterator	MutanStack<Type>::end(void)
{
	return (iterator(s.begin()));
}

//====< operator++ >============================================================
template<class Type>
typename MutanStack<Type>::iterator& MutanStack<Type>::iterator::operator++()
{
	return (--iter, *this);
}

//====< operator-- >============================================================
template<class Type>
typename MutanStack<Type>::iterator& MutanStack<Type>::iterator::operator--()
{
	return (++iter, *this);
}

//====< operator* >=============================================================
template<class Type>
Type	MutanStack<Type>::iterator::operator*(void)
{
	return (*iter);
}
