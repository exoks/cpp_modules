#include "Base.hpp"

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
