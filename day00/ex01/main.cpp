/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:02:58 by juan              #+#    #+#             */
/*   Updated: 2021/02/22 14:14:28 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

using namespace std;

int			main(void)
{
	char buf[100];
	int b = 0;
	Contact		contact[8];
	int i = 0;
	int count = 0;
	
	std::cout << "Hello, welcome to the White Pages !" << std::endl;
	
	while (b == 0 && i < 8)
	{
		std::cout << "Input a command : ";
		std::cin >> buf;
		if (strcmp(buf, "EXIT") == 0)
			b = 1;
		else if (strcmp(buf, "ADD") == 0)
		{
			contact[i].add();
			count++;
		}
		else if (strcmp(buf, "SEARCH") == 0)
		{
			contact->print_search(count, contact);
		}
		else
			std::cout << "Please enter a good input." << std::endl;
		i++;
	}
	std::cout << "End of White Pages." << std::endl;
	std::cout << "Thanks for your utilisation !" << std::endl;
	
}
