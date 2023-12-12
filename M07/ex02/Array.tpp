//====< constructor >===========================================================
template <class T> Array<T>::Array(void) : length(10)
{
		this->arr = new T[length];
}

//====< constructor >===========================================================
template <class T> Array<T>::Array(unsigned int n) : length(static_cast<int>(n))
{
	this->arr = new T[n];
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
	for (int i = 0; i < length && i < arr.size(); i++)
		(*this)[i] = arr[i];
}

//====< operator[] >============================================================
template <class T>
T&	Array<T>::operator[](int index) const
{
	try
	{
		if (index < 0 || index >= length)
			throw (std::out_of_range("OutOfBounds."));
		return (arr[index]);
	}
	catch (std::exception & e){
		std::cout << "Exception Caught: " << e.what() << std::endl;
	}
	return (arr[0]);
}

//====< displayElements >=======================================================
template <class T>
void	Array<T>::displayElements(void)
{
	for (int index = 0; index < length; index++)
		std::cout << arr[index] << std::endl;
}

//====< size >==================================================================
template <class T>
int	Array<T>::size(void) const
{
	return (length);
}
