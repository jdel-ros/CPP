/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:43:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/12 11:00:28 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int			main( void )
{
	srand(time(NULL));

	std::cout << std::endl;
	std::cout << "---Bureaucrat---" << std::endl;
	std::cout << std::endl;

	try
	{
		Bureaucrat Jamy("Jamy", 200);
	}
	catch(const Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Fred("Fred", 0);
	}
	catch(const Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat Jones("Jones", 50);
	Bureaucrat Kevin("Kevin", 50);
	std::cout << std::endl;
	std::cout << Jones << Kevin << std::endl;
	for( int i = 0; i < 101; i++)
		Jones.decrementGrade();
	for( int i = 0; i < 49; i++)
		Kevin.incrementGrade();
	std::cout << std::endl;
	std::cout << Jones << Kevin << std::endl;
	Bureaucrat Jones2 = Jones;
	Bureaucrat Jones3(Jones);
	std::cout << Jones2 << Jones3 << std::endl;

	std::cout << "---Form---" << std::endl;

	ShrubberyCreationForm sh("Home");
	PresidentialPardonForm pr("Pres");
	RobotomyRequestForm ro("Robot");
	std::cout << std::endl;
	std::cout << sh << pr << ro << std::endl;
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
