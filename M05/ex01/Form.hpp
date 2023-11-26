/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 10:53:01 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/23 12:28:05 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP__
# define __FORM_HPP__

# include "Bureaucrat.hpp"

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;

	public:
		Form(void);
		Form(std::string attr1, bool attr2, int attr3, int attr4);
		Form(const Form& form);
		~Form(void);

		Form&			operator=(const Form& form);
		std::string		getName(void) const;
		bool			getIsSigned(void) const;
		int				getSignGrade(void) const;
		int				getExecGrade(void) const;

		void			beSigned(const Bureaucrat& bureaucrat);
};

std::ostream&	operator<<(std::ostream& stream, const Form& form);

#endif /*__FORM_HPP__*/
