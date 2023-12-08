//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < Span.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/08 21:02:47 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/08 21:02:47 by oezzaou
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
Span::Span(const Span & span)
{
	*this = span;
}

//====< destructor >============================================================
Span::~Span(void)
{
}

// need to optimaze more this part
//====< operator= >=============================================================
Span &	Span::operator=(const Span & span)
{
	for (unsigned int i = 0; i < span.v.size(); i++)
	{
		try
		{
			if (i >= N)
				throw (std::out_of_range("Can not copy all elements"));
			v[i] = span.v[i];
		} catch (std::exception & e){
			std::cout << "Exception Caught: " << e.what() << span.v[i] << std::endl;	
		}
	}
	return (*this);
}

//====< addNumber >=============================================================
void	Span::addNumber(int nbr)
{
	try
	{
		if (v.size() >= N)
			throw (std::out_of_range("Can not add more numbers: "));
		v.push_back(nbr);
	} catch (std::exception & e){
		std::cout << "Exception Caught: " << e.what() << nbr << std::endl;	
	}
}

//====< shortestSpan >==========================================================
int	shortestSpan(void)
{
	return (0);
}

//====< longestSpan >===========================================================
int	Span::longestSpan(void)
{
	std::string			msg[2] = {"No numbers found", "only one number exist"};
	std::vector<int>	tmp(v);

	try
	{
		if (N == 0 || v.size() == 0 || v.size() == 1)
			throw (std::out_of_range(msg[v.size()]));
		sort(begin(tmp), end(tmp));
		return (*(--end(tmp)) - *begin(tmp));
	} catch (std::exception & e){
		std::cout << "Exception Caught: " << e.what() << std::endl;	
	}
	return (0);
}
