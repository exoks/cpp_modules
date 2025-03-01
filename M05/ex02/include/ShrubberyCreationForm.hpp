//====<[ Include guards: ]>=====================================================
#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include "AForm.hpp"
# include "fstream"

//====<[ Class: RobotomyRequestForm: ]>=========================================
typedef class	ShrubberyCreationForm : public AForm
{
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string form);
		ShrubberyCreationForm(ShrubberyCreationForm & form);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const & form);
	
		void	beSigned(const Bureaucrat & bureaucrat);
		void	execute(Bureaucrat const & executor) const;
}		SCForm;

#endif /*__SHRUBBERYCREATIONFORM_HPP__*/
//==============================================================================
