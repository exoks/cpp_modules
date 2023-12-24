//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########       < Array.tpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/23 17:54:25 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/23 17:54:48 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

//====< constructor >===========================================================
template <class T> Array<T>::Array(void) : length(0)
{
		this->arr = new T[length];
}

//====< constructor >===========================================================
template <class T> Array<T>::Array(unsigned int n) : length(n)
{
	this->arr = new T[length];
}


//====< copy constructor >======================================================
template <class T> Array<T>::Array(const Array<T> & arr)
{
	this->arr = new T[arr.size()];
	*this = arr;
}

//====< destructor >============================================================
template <class T> Array<T>::~Array(void)
{
	delete[] arr;
}

//====< operator= >=============================================================
template <class T>
void	Array<T>::operator=(const Array<T> & arr)
{
	for (unsigned int index = 0; index < length && index < arr.size(); index++)
		(*this)[index] = arr[index];
}

//====< operator[] >============================================================
template <class T>
T&	Array<T>::operator[](unsigned int index) const
{
	if (index >= length)
		throw (std::out_of_range("OutOfBounds: Invalid index"));
	return (arr[index]);
}

//====< size >==================================================================
template <class T>
unsigned int	Array<T>::size(void) const
{
	return (this->length);
}
