#ifndef __BASE_HPP__
# define __BASE_HPP__

# include <iostream>
# include <exception>

class	Base
{
	public:
		virtual ~Base(void);
};

class	A : public Base
{
};

class	B : public Base
{
};

class	C : public Base
{
};



std::ostream&	operator<<(std::ostream& stream, const A& a);
std::ostream&	operator<<(std::ostream& stream, const B& b);
std::ostream&	operator<<(std::ostream& stream, const C& c);

Base			*generate(void);
void			identify(Base *p);
void			identify(Base& p);

#endif /*__BASE__HPP__*/
