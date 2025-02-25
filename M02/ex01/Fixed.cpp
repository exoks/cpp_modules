//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀               𓐓  Fixed.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/08/11 15:38:18 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/02/25 13:23:21 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

#include "Fixed.hpp"

//===<[ Static const int fracBits init: ]>======================================
const int	Fixed::fracBits = 8;

//===<[ Fixed Default Constructor: ]>===========================================
Fixed::Fixed() : fixedPointNbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

//===<[ Fixed Constructor 1: ]>=================================================
Fixed::Fixed(float const floatPointNbr)
{
	std::cout << "Float constructor called" << std::endl;
	fixedPointNbr = roundf(floatPointNbr * ((float) (1 << fracBits)));
}

//===<[ Fixed Constructor 2: ]>=================================================
Fixed::Fixed(int const intNbr)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPointNbr = intNbr << fracBits;
}

//===<[ Fixed Copy Constructor: ]>==============================================
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	(*this) = fixed;
}

//===<[ Fixed Distructor: ]>====================================================
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//===<[ Fixed Copy Assignment Operator: ]>======================================
Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fixedPointNbr = fixed.getRawBits();
	return (*this);
}

//===<[ getRawBits: ]>==========================================================
int		Fixed::getRawBits(void) const
{
	return (fixedPointNbr);
}

//===<[ setRawBits: ]>==========================================================
void	Fixed::setRawBits(int const raw)
{
	fixedPointNbr = raw;
}

//===<[ toInt: ]>===============================================================
int		Fixed::toInt(void) const
{
	return (fixedPointNbr >> fracBits);
}

//===<[ toFloat: ]>=============================================================
float	Fixed::toFloat(void) const
{
	return (fixedPointNbr / ((float)(1 << fracBits)));
}

//===<[ Insertion operator: ]>==================================================
std::ostream&	operator<< (std::ostream& output, const Fixed& fixed)
{
	return (output << fixed.toFloat());
}
