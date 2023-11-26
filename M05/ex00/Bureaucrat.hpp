/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 10:26:18 by oezzaou           #+#    #+#             */
/*   Updated: 2023/11/22 18:17:24 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef __BUREAUCRAT_HPP_
# define __BUREAUCRAT_HPP_
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
};

std::ostream&		operator<<(std::ostream& stream, Bureaucrat& inst);

#endif /*__BUREAUCRAT_HPP__*/
