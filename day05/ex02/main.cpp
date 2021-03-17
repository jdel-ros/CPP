/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:43:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 14:57:14 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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
	Form paper("paper", 10, 5);
	std::cout << paper << std::endl;
	Form paperfalse("paperfalse", 160, -5);
	std::cout << paperfalse << std::endl;
	paper.beSigned(Jones);
	paper.beSigned(Kevin);
	std::cout << paper << std::endl;
	Form paper2 = paper;
	std::cout << paper2 << std::endl;
	Form paper3(paper);
	std::cout << paper3 << std::endl;
	return 0;
}
