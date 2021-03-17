/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:43:56 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 12:04:09 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	return 0;
}
