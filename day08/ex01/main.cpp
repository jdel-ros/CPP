/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:33:01 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/30 13:10:45 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int			main(void)
{
	Span sp = Span(1);
	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	}
	catch(const std::out_of_range & of)
	{
		std::cerr << of.what() << std::endl;
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::length_error & le)
	{
		std::cerr << le.what() << std::endl;
	}

	Span	mySpan(10000);
	try
	{
		mySpan.addNumberEasier(60, 10000);
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
	// mySpan.printNumber();
}
