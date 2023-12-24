//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Span.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/24 18:30:20 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/24 18:32:56 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

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
