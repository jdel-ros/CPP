/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:43:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 15:10:56 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int			main( void )
{
	Bureaucrat Kevin("Kevin", 1);
	Intern someRandomIntern;
	Form* form1;
	Form* form2;
	Form* form3;
	Form* form4;
	try
	{
		form1 = someRandomIntern.makeForm("robotomy request", "Bender");
		if (!form1)
			throw std::invalid_argument("Form error");
		else
		{
			std::cout << *form1 << std::endl;
			form1->beSigned(Kevin);
			Kevin.executeForm(*form1);
		}
		form2 = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (!form2)
			throw std::invalid_argument("Form error");
		else
		{
			std::cout << *form2 << std::endl;
			form2->beSigned(Kevin);
			Kevin.executeForm(*form2);
		}
		form3 = someRandomIntern.makeForm("shruberry creation", "Bender");
		if (!form3)
			throw std::invalid_argument("Form error");
		else
		{
			std::cout << *form3 << std::endl;
			form3->beSigned(Kevin);
			Kevin.executeForm(*form3);
		}
		form4 = someRandomIntern.makeForm("gneeee", "Bender");
		if (!form4)
			throw std::invalid_argument("Form error");
		else
		{
			std::cout << *form4 << std::endl;
			form4->beSigned(Kevin);
			Kevin.executeForm(*form4);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
