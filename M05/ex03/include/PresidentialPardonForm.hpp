/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 12:40:52 by oezzaou           #+#    #+#             */
/*   Updated: 2023/12/21 22:24:21 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include "AForm.hpp"

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
