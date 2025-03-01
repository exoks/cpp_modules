//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀                𓐓  Base.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/12/23 20:05:24 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/03/01 21:39:11 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

#include "Base.hpp"

//====< Destuctor >=============================================================
Base::~Base(void)
{
}

//====< Operator= >=============================================================
std::ostream&	operator<<(std::ostream& stream, const A& a)
{
	(void) a;
	return stream << "Instance of type A" << std::endl;
}

//====< Operator= >=============================================================
std::ostream&	operator<<(std::ostream& stream, const B& b)
{
	(void) b;
	return stream << "Instance of type B" << std::endl;
}

//====< Operator= >=============================================================
std::ostream&	operator<<(std::ostream& stream, const C& c)
{
	(void) c;
	return stream << "Instance of type C" << std::endl;
}

//====< generate >==============================================================
Base	*generate(void)
{
	Base	*ptr;
	int		index;

	srand(time(NULL));
	index = rand() % 3;
	if (index == 0)
		ptr = new A();
	if (index == 1)
		ptr = new B();
	if (index == 2)
		ptr = new C();
	std::cout	<< "Class: "
		  		  << static_cast<char>(index + 65)
				    << " Has been created." << std::endl;
	return (ptr);
}

//====< identify >==============================================================
void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Instance of type A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Instance of type B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Instance of type C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
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
