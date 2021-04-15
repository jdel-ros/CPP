/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:33:01 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/15 09:01:22 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int			main(void)
{
	Span sp = Span(10);
	try
	{
		sp.addNumber(12);
		sp.addNumber(3);
		sp.addNumber(-17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(const std::out_of_range & of)
	{
		std::cerr << of.what() << std::endl;
	}
	// sp.printNumber();
	std::cout << std::endl;
	try
	{
		std::cout << "Shortest = " << sp.shortestSpan() << std::endl;
		std::cout << "Longest = " << sp.longestSpan() << std::endl;
	}
	catch(const std::length_error & le)
	{
		std::cerr << le.what() << std::endl;
	}

	Span	mySpan(150);
	try
	{
		mySpan.addNumberEasier(-1, 100);
	}
	catch(const std::out_of_range & of)
	{
		std::cerr << of.what() << std::endl;
	}
	// mySpan.printNumber();
	std::cout << std::endl;
	try
	{
		std::cout << "Shortest = " << mySpan.shortestSpan() << std::endl;
		std::cout << "Longest = " << mySpan.longestSpan() << std::endl;
	}
	catch(const std::length_error & le)
	{
		std::cerr << le.what() << std::endl;
	}
}
