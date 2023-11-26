#include "Base.hpp"

//====< Destuctor >=============================================================
Base::~Base(void)
{
}

//====< Operator= >=============================================================
std::ostream&	operator<<(std::ostream& stream, const A& a)
{
	(void) a;
	return stream << "Instance of type A." << std::endl;
}

//====< Operator= >=============================================================
std::ostream&	operator<<(std::ostream& stream, const B& b)
{
	(void) b;
	return stream << "Instance of type B." << std::endl;
}

//====< Operator= >=============================================================
std::ostream&	operator<<(std::ostream& stream, const C& c)
{
	(void) c;
	return stream << "Instance of type C." << std::endl;
}
