//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀               𓐓  Fixed.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/08/11 15:38:18 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/02/25 15:08:38 by oezzaou
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
}

//===<[ Fixed Constructor 1: ]>=================================================
Fixed::Fixed(float const floatPointNbr)
{
	fixedPointNbr = roundf(floatPointNbr * ((float) (1 << fracBits)));
}

//===<[ Fixed Constructor 2: ]>=================================================
Fixed::Fixed(int const intNbr)
{
	fixedPointNbr = intNbr << fracBits;
}

//===<[ Fixed Copy Constructor: ]>==============================================
Fixed::Fixed(const Fixed &fixed)
{
	(*this) = fixed;
}

//===<[ Fixed Distructor: ]>====================================================
Fixed::~Fixed()
{
}

//===<[ Fixed Copy Assignment Operator: ]>======================================
Fixed&	Fixed::operator= (const Fixed& fixed)
{
	fixedPointNbr = fixed.getRawBits();
	return (*this);
}

//===<[ Fixed > Operator: ]>====================================================
bool	Fixed::operator> (const Fixed& fixed) const
{
	return (fixedPointNbr > fixed.getRawBits());
}

//===<[ Fixed < Operator: ]>====================================================
bool	Fixed::operator< (const Fixed& fixed) const
{
	return (fixedPointNbr < fixed.getRawBits());
}

//===<[ Fixed <= Operator: ]>===================================================
bool	Fixed::operator<= (const Fixed& fixed)
{
	return (fixedPointNbr <= fixed.getRawBits());
}

//===<[ Fixed >= Operator: ]>===================================================
bool	Fixed::operator>= (const Fixed& fixed)
{
	return (fixedPointNbr >= fixed.getRawBits());
}

//===<[ Fixed == Operator: ]>===================================================
bool	Fixed::operator== (const Fixed& fixed)
{
	return (fixedPointNbr == fixed.getRawBits());
}

//===<[ Fixed != Operator: ]>===================================================
bool	Fixed::operator!= (const Fixed& fixed)
{
	return (fixedPointNbr != fixed.getRawBits());
}

//===<[ Fixed + Operator: ]>====================================================
Fixed	Fixed::operator+ (const Fixed& fixed)
{
	return (Fixed((*this).toFloat() + fixed.toFloat()));
}

//===<[ Fixed - Operator: ]>====================================================
Fixed	Fixed::operator- (const Fixed& fixed)
{
	return (Fixed((*this).toFloat() - fixed.toFloat()));
}

//===<[ Fixed * Operator: ]>====================================================
Fixed	Fixed::operator* (const Fixed& fixed)
{
	return (Fixed((*this).toFloat() * fixed.toFloat()));
}

//===<[ Fixed / Operator: ]>====================================================
Fixed	Fixed::operator/ (const Fixed& fixed)
{
	return (Fixed((*this).toFloat() / fixed.toFloat()));
}

//===<[ Fixed Pre-Increment Operator: ]>========================================
Fixed&	Fixed::operator++ (void)
{
	++fixedPointNbr;
	return (*this);
}

//===<[ Fixed Post-Increment Operator: ]>=======================================
Fixed	Fixed::operator++ (int)
{
	Fixed	old = (*this);
	fixedPointNbr++;
	return (old);
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

//===<[ Min: ]>=================================================================
Fixed& Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return (f1);
	return (f2);
}

//===<[ min const: ]>===========================================================
Fixed& Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() < f2.getRawBits())
		return ((Fixed&) f1);
	return ((Fixed&) f2);
}

//===<[ Max: ]>=================================================================
Fixed& Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return (f1);
	return (f2);
}

//===<[ Max const: ]>===========================================================
Fixed& Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return ((Fixed&) f1);
	return ((Fixed&) f2);
}

//===<[ Insertion operator: ]>==================================================
std::ostream& operator<< (std::ostream& os, const Fixed& fixed)
{
	return (os << fixed.toFloat());
}
