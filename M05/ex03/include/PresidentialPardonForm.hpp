//====<[ Include guards: ]>=====================================================
#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "AForm.hpp"

//====<[ Class: PresidentialPardonForm ]>=======================================
typedef	class	PresidentialPardonForm : public AForm
{
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string form);
		PresidentialPardonForm(PresidentialPardonForm& form);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(PresidentialPardonForm const & form);

		void					beSigned(const Bureaucrat& bureaucrat);
		void					execute(Bureaucrat const & executor) const;
}		PPForm;

#endif /*__PRESIDENTIALPARDONFORM_HPP__*/
//==============================================================================
