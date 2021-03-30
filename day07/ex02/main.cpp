/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:29:50 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/30 13:13:04 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "TArray.hpp"

int			main(void)
{
	Array<int> test1(15);
	std::cout << "Test1 = ";
	for (unsigned int i = 0; i < test1.size(); i++)
	{
		test1[i] = static_cast<int>(i);
		std::cout << test1[i] << " ";
	}
	std::cout << std::endl;

	Array<int> test2(test1);
	std::cout << "Test2 = ";
	for (unsigned int i = 0; i < test2.size(); i++)
	{
		test2[i] = static_cast<int>(i);
		std::cout << test2[i] << " ";
	}
	std::cout << std::endl;

	Array<int> test3 = test2;
	std::cout << "Test3 = ";
	for (unsigned int i = 0; i < test3.size(); i++)
	{
		test3[i] = static_cast<int>(i);
		std::cout << test3[i] << " ";
	}
	std::cout << std::endl;
	try
	{
		std::cout << test3[16] << std::endl;
	}
	catch(const std::length_error & le)
	{
		std::cerr << le.what() << std::endl;
	}
	return (0);
}
