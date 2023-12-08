//====< easyfind >==============================================================
template <typename T>
void	easyfind(T vector, int x)
{
	unsigned int	index;

	index = 0;
	try
	{
		while (index < vector.size() && vector[index] != x)
			index++;
		if (index == vector.size())
			throw (std::out_of_range("Exception Caught: Not found."));
		std::cout << "Exist: " << vector[index] << std::endl;
	} catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
}
