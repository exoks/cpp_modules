//  ⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣦⣴⣶⣾⣿⣶⣶⣶⣶⣦⣤⣄⠀⠀⠀⠀⠀⠀⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢠⡶⠻⠛⠟⠋⠉⠀⠈⠤⠴⠶⠶⢾⣿⣿⣿⣷⣦⠄⠀⠀⠀          𓐓  Bureaucrat.cpp 𓐔           
//  ⠀⠀⠀⠀⠀⢀⠔⠋⠀⠀⠤⠒⠒⢲⠀⠀⠀⢀⣠⣤⣤⣬⣽⣿⣿⣿⣷⣄⠀⠀                                              
//  ⠀⠀⠀⣀⣎⢤⣶⣾⠅⠀⠀⢀⡤⠏⠀⠀⠀⠠⣄⣈⡙⠻⢿⣿⣿⣿⣿⣿⣦⠀      Dev: oezzaou <oussama.ezzaou@gmail.com> 
//  ⢀⠔⠉⠀⠊⠿⠿⣿⠂⠠⠢⣤⠤⣤⣼⣿⣶⣶⣤⣝⣻⣷⣦⣍⡻⣿⣿⣿⣿⡀                                              
//  ⢾⣾⣆⣤⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠉⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇                                              
//  ⠀⠈⢋⢹⠋⠉⠙⢦⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇       Created: 2023/12/22 17:32:05 by oezzaou
//  ⠀⠀⠀⠑⠀⠀⠀⠈⡇⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇       Updated: 2025/03/01 18:45:13 by oezzaou
//  ⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⢀⣾⣿⣿⠿⠟⠛⠋⠛⢿⣿⣿⠻⣿⣿⣿⣿⡿⠀                                              
//  ⠀⠀⠀⠀⠀⠀⠀⢀⠇⠀⢠⣿⣟⣭⣤⣶⣦⣄⡀⠀⠀⠈⠻⠀⠘⣿⣿⣿⠇⠀                                              
//  ⠀⠀⠀⠀⠀⠱⠤⠊⠀⢀⣿⡿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠘⣿⠏⠀⠀                             𓆩♕𓆪      
//  ⠀⠀⠀⠀⠀⡄⠀⠀⠀⠘⢧⡀⠀⠀⠸⣿⣿⣿⠟⠀⠀⠀⠀⠀⠀⠐⠋⠀⠀⠀                     𓄂 oussama ezzaou𓆃  
//  ⠀⠀⠀⠀⠀⠘⠄⣀⡀⠸⠓⠀⠀⠀⠠⠟⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀                                              

# include "Bureaucrat.hpp"

//====< Constructor >===========================================================
Bureaucrat::Bureaucrat(void)
{
}

//====< Constructor >===========================================================
Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	try
	{
		if (grade < 1 || grade > 150)
			throw (Exception("Grade < 1 or Grade > 150"));
		this->grade = grade;
	}catch (Exception& e){
		std::cout << "Invalid Grade: " << e.what() << std::endl;
	}
}

//====< Copy Constructor >======================================================
Bureaucrat::Bureaucrat(const Bureaucrat & inst)
{
	*this = inst;
}

//====< Destructor >============================================================
Bureaucrat::~Bureaucrat(void)
{
}

//====< Copy Assignment Operator >==============================================
Bureaucrat&	Bureaucrat::operator=(const Bureaucrat & inst)
{
	grade = inst.grade;
	return (*this);
}

//====< Insertion Overloading Operator >========================================
std::ostream& operator<<(std::ostream & stream, Bureaucrat & inst)
{
	stream  << inst.getName()
			    << " bureaucrat grade "
			    << inst.getGrade()
			    << std::endl;
	return (stream);
}

//====< getName >===============================================================
std::string	Bureaucrat::getName(void) const
{
	return (name);
}

//====< getName >===============================================================
int			Bureaucrat::getGrade(void) const
{
	return (grade);
}

//====< incrementGrade >========================================================
void		Bureaucrat::incrementGrade(void)
{
	try
	{
		if (grade <= 1 || grade > 150)
			throw (GradeTooHighException());
		--grade;
	}
	catch (Exception & e){
		std::cout << "Excption Caught: " << e.what() << std::endl;
	}
}

//====< decrementGrade >========================================================
void		Bureaucrat::decrementGrade(void)
{
	try
	{
		if (grade < 1 || grade >= 150)
			throw (GradeTooLowException());
		++grade;
	}
	catch (Exception & e){
		std::cout << "Exception Caught: " << e.what() << std::endl;
	}
}

//====< signForm >==============================================================
void	Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl;
	} catch(Exception & e){
		std::cout	<< this->name
					    << " couldn't sign form "
					    << form.getName()
			        << " because "
					    << e.what() << std::endl;
	}
}
