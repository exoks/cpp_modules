//            ################                                                  
//          ####################                                                
//        ########################                                              
//       #############+########### #                                            
//       ######-..        .+########        < main.cpp >                        
//       ####-..            ..+####                                             
//       ###-...             .-####                                             
//       ###...              ..+##    Student: oezzaou <oezzaou@student.1337.ma>
//        #-.++###.      -###+..##                                              
//        #....  ...   .-.  ....##       Created: 2023/12/23 16:36:37 by oezzaou
//     --.#.-#+## -..  -+ ##-#-.-...     Updated: 2023/12/23 16:36:42 by oezzaou
//      ---....... ..  ........... -                                            
//      -+#..     ..   .       .+-.                                             
//       .--.     .     .     ..+.                                              
//         -..    .+--.-.     ...                                               
//         +.... .-+#.#+.    ..-                                                
//          +...#####-++###-..-                                                 
//          #---..----+--.---+##                                                
//        ###-+--.... ....--+#####                                              
//  ##########--#-.......-#-###########      Made By Oussama Ezzaou <OEZZAOU> :)

# include "iter.hpp"
# include <iostream>

//====< test >===================================================================
class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};
//====================
std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}
//====================
template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
}
//==============================================================================

//====< main >==================================================================
int	main(void)
{
	int		tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

  	iter(tab, 5, print<int>);
	std::cout << "=========================" << std::endl;
  	iter(tab, 5, print<const int>);
  	iter(tab2, 5, print<Awesome>);	
	return (EXIT_SUCCESS);
}
