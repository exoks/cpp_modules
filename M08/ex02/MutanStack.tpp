//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########  < MutanStack.tpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oussama <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/24 20:18:11 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/24 20:18:18 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)
/*
//====< push >==================================================================
template <class Type>
void	MutanStack<Type>::push(Type element)
{
	this->push_back(element);
}

//====< pop >===================================================================
template <class Type>
void	MutanStack<Type>::pop()
{
	try
	{
		if (this->size() == 0)
			throw (std::out_of_range("empty stack."));
		this->pop_back();
	} catch (std::exception & e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
}

//====< top >===================================================================
template <class Type>
Type		MutanStack<Type>::top(void)
{
	try 
	{
		if (this->size() == 0)
			throw (std::out_of_range("empty stack."));
		return (this->back());
	} catch (std::exception & e){
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
*/
//====< iterator constructor >==================================================
template <class Type>
MutanStack<Type>::iterator::iterator(void)
{
}

//====< iterator constructor >==================================================
template <class Type>
MutanStack<Type>::iterator::iterator(typename std::deque<Type>::iterator it)
{
	this->iter = it;
}

//====< operator++ >============================================================
template <class Type>
typename MutanStack<Type>::iterator & MutanStack<Type>::iterator::operator++()
{
	return (--iter, *this);
}

//====< operator-- >============================================================
template <class Type>
typename MutanStack<Type>::iterator & MutanStack<Type>::iterator::operator--()
{
	return (++iter, *this);
}

//====< operator-- >============================================================
template <class Type>
bool MutanStack<Type>::iterator::operator!=(const MutanStack<Type>::iterator & it)
{
	return (iter != it); 
}

//====< operator* >=============================================================
template <class Type>
Type	MutanStack<Type>::iterator::operator*(void)
{
	return (*iter);
}
