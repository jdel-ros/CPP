/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:43:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/12 10:58:10 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main( void )
{
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
	std::cout << std::endl;
	try
	{
		std::cout << "Create form too high" << std::endl;
		Form paperfalse("paperfalse", 0, 5);
	}
	catch(const Form::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Create form too low" << std::endl;
		Form paperfalse2("paperfalse2", 160, 5);
	}
	catch(const Form::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Form paper("paper", 10, 5);
	std::cout << "Try signed paper with Jones" << std::endl;
	paper.beSigned(Jones);
	std::cout << paper << std::endl;
	std::cout << "Try signed paper with Kevin" << std::endl;
	paper.beSigned(Kevin);
	std::cout << paper << std::endl;
	Form paper2 = paper;
	std::cout << paper2 << std::endl;
	Form paper3(paper);
	std::cout << paper3 << std::endl;
	return 0;
}
