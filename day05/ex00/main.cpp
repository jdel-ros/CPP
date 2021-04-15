/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:43:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/12 10:49:54 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	std::cout << Jones2 << std::endl;
	Bureaucrat Jones3(Jones);
	std::cout << Jones3 << std::endl;
}
