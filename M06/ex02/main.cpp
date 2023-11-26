#include "Base.hpp"

//==============================================================================
Base	*generate(void);
void	identify(Base *p);
void	identify(Base& p);

//====< main >==================================================================
int	main(void)
{
	Base	*ptr;
	Base	b;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
	identify(NULL);
	identify(b);
	return (EXIT_SUCCESS);
}

//====< generate >==============================================================
Base	*generate(void)
{
	Base		*ptr;
	int		index;
	static int	var;

	index = var++ % 3;
	if (index == 0)
		ptr = new A();
	if (index == 1)
		ptr = new B();
	if (index == 2)
		ptr = new C();
	std::cout << "Class: "
		  << static_cast<char>(index + 65)
		  << " Has been created."
		  << std::endl;
	return (ptr);
}

//====< identify >==============================================================
void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Instance of type A." << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Instance of type B." << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Instance of type C." << std::endl;
	else
		std::cout << "Unknown type." << std::endl;
}

//====< identify >==============================================================
void	identify(Base& p)
{
	try
	{
		std::cout << dynamic_cast<A&>(p);
	}catch (std::exception & e){
		try
		{
			std::cout << dynamic_cast<B&>(p);
		}catch (std::exception & e){
			try
			{
				std::cout << dynamic_cast<C&>(p);
			}catch (std::exception & e){
				std::cout << "Unknown type." << std::endl;
			}
		}
	}
}
