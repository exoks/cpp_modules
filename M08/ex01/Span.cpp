//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀                𓐓  Span.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/12/28 15:41:26 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/02/26 14:57:00 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include "Span.hpp"

//====< constructor >===========================================================
Span::Span(void)
{
}

//====< constructor >===========================================================
Span::Span(unsigned int N) : N(N)
{
}

//====< copy constructor >======================================================
Span::Span(const Span & span) : N(span.N)
{
	*this = span;
}

//====< destructor >============================================================
Span::~Span(void)
{
}

//====< operator= >=============================================================
Span &	Span::operator=(const Span & span)
{
	for (unsigned int i = 0; i < span.N; ++i)
	{
		if (i >= N)
			throw (std::out_of_range("can not add more elements"));
		v[i] = span.v[i];
	}
	return (*this);
}

//====< addNumber >=============================================================
void	Span::addNumber(int nbr)
{
	if (v.size() >= N)
		throw (std::out_of_range("can not add more numbers"));
	v.push_back(nbr);
}

//====< addNumbers >============================================================
void	Span::addNumbers(unsigned int range)
{
	if (range > N)
		throw (std::out_of_range("OutOfBounds"));
	srand(time(NULL));
	for (unsigned int index = 0; index < range; index++)
		v.push_back(rand());
}

//====< shortestSpan >==========================================================
int		Span::shortestSpan(void)
{
	std::string			msg[2] = {"No numbers found", "only one number exist"};
	std::vector<int>	vect(v);
	int					shortest;

	if (N <= 1 || v.size() <= 1)
		throw (std::out_of_range(msg[v.size()]));
	sort(vect.begin(), vect.end());
	shortest = this->longestSpan();
	for (std::vector<int>::iterator i = vect.begin(); i != vect.end(); ++i)
	{
		if (i + 1 != vect.end() && shortest > *(i + 1) - *i)
			shortest = *(i + 1) - *i;
	}
	return (shortest);
}

//====< longestSpan >===========================================================
int	Span::longestSpan(void)
{
	std::string			msg[2] = {"No numbers found", "only one number exist"};
	std::vector<int>	vect(v);

	if (N <= 1 || v.size() <= 1)
		throw (std::out_of_range(msg[v.size()]));
	sort(vect.begin(), vect.end());
	return (*(--end(vect)) - *begin(vect));
}
