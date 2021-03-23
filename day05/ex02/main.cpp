/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:43:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 10:45:40 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main( void )
{
	Bureaucrat Jones("Jones", 50);
	Bureaucrat Kevin("Kevin", 50);
	std::cout << std::endl;
	Bureaucrat Jamy("Jamy", 200);
	Bureaucrat Fred("Fred", -5);
	std::cout << std::endl;
	std::cout << Jones << Kevin << std::endl;
	for( int i = 0; i < 100; i++)
	{
		Jones.decrementGrade();
		Kevin.incrementGrade();
	}
	std::cout << std::endl;
	std::cout << Jones << Kevin << std::endl;
	ShrubberyCreationForm sh("Home");
	PresidentialPardonForm pr("Moi");
	RobotomyRequestForm ro("Toi");
	std::cout << std::endl;
	std::cout << "SIGNED JONES" << std::endl;
	std::cout << std::endl;
	sh.beSigned(Jones);
	ro.beSigned(Jones);
	pr.beSigned(Jones);
	std::cout << std::endl;
	std::cout << "SIGNED KEVIN" << std::endl;
	std::cout << std::endl;
	sh.beSigned(Kevin);
	ro.beSigned(Kevin);
	pr.beSigned(Kevin);
	std::cout << std::endl;
	std::cout << "EXECUTE JONES" << std::endl;
	std::cout << std::endl;
	Jones.executeForm(sh);
	Jones.executeForm(ro);
	Jones.executeForm(pr);
	std::cout << std::endl;
	std::cout << "EXECUTE KEVIN" << std::endl;
	std::cout << std::endl;
	Kevin.executeForm(sh);
	Kevin.executeForm(ro);
	Kevin.executeForm(pr);
	return 0;
}
