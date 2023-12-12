//====< easyfind >==============================================================
template <typename T>
void	easyfind(T container, int x)
{
	try
	{
		if (find(container.begin(), container.end(), x) == container.end())
			throw (std::out_of_range(": Not found."));
		std::cout << "Exist: " << x << std::endl;
	} catch (std::exception & e){
		std::cout << "Exception caught: " << x << e.what() << std::endl;
	}
}
