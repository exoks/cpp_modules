/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:26:18 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/24 16:12:35 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include "Exception.hpp"

class	Bureaucrat
{
	private:
		std::string	name;
		int			grade;

	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &inst);
		~Bureaucrat(void);

		Bureaucrat&	operator=(const Bureaucrat &inst);
		std::string	getName(void) const;
		int			getGrade(void) const;

		void		incrementGrade(void);
		void		decrementGrade(void);
//		void		signForm(AForm const & form);
//		void		executeForm(AForm const & form);
};

std::ostream&		operator<<(std::ostream& stream, Bureaucrat& inst);

#endif /*__BUREAUCRAT_HPP__*/
