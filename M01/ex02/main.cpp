/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oezzaou <oezzaou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:44:17 by oezzaou           #+#    #+#             */
/*   Updated: 2023/08/30 14:52:11 by oezzaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include <iostream>

int	main(void)
{
	std::string		name = "HI THIS IS BRAIN";
	std::string		*stringPTR = &name;
	std::string&	stringREF  = name;

	std::cout << "Address StringVAR : "	<< &name		<< std::endl;
	std::cout << "Address StringPTR : "	<< stringPTR	<< std::endl;
	std::cout << "Address StringREF : "	<< &stringREF	<< std::endl;
	std::cout << "Value StringVAR   : "	<< name			<< std::endl;
	std::cout << "Value StringPTR   : "	<< *stringPTR	<< std::endl;
	std::cout << "Value StringREF   : "	<< stringREF	<< std::endl;
	return (EXIT_SUCCESS);
}
