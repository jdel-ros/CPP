/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:02:58 by juan              #+#    #+#             */
/*   Updated: 2021/02/25 14:34:24 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

int		choose_index(Contact contact[8], int count)
{
	std::string buf;
	int bl = 0;
	int index = 0;

	std::cout << std::endl;
	std::cout << "Choose the contact index you need" << std::endl;
	while (bl == 0)
	{
		std::cout << "Index : ";
		std::getline(std::cin, buf);
		if (buf.length() > 1 || isdigit(buf[0]) == 0)
			std::cout << "You have " << count << " contact. Please choose an index between 1 and " << count << std::endl;
		else 
		{
			index = std::stoi(buf, nullptr, 10);
			if (index > count || index <= 0)
				std::cout << "You have " << count << " contact. Please choose an index between 1 and " << count << std::endl; 
			if (index > 0 && index <= count)
				bl = 1;
		}
	}
	return (index);
}

int			main(void)
{
	std::string buf;
	int b = 0;
	Contact contact[8];
	int count = 0;
	int index = 0;

	std::cout << "Hello, welcome to the White Pages !" << std::endl;
	std::cout << std::endl << "You have 3 options :	- ADD : add will ask you some information for add a contact in you white pages." << std::endl;
	std::cout << "			- SEARCH : search will display a few of information of all contact add beforehand." <<  std::endl;
	std::cout << "			- EXIT : exit leave rou white pages and forget all your contact." <<  std::endl;
	while (b == 0)
	{
		std::cout << "Input a command : ";
		std::getline(std::cin, buf);
		if (buf.compare("EXIT") == 0 || buf.compare("exit") == 0)
			b = 1;
		else if (buf.compare("ADD") == 0 || buf.compare("add") == 0)
		{
			if (count >= 8)
				std::cout << "You can't add more than 8 contact." << std::endl;
			else 
			{
				contact[count].add(count);
				count++;
			}
		}
		else if (buf.compare("SEARCH") == 0 || buf.compare("search") == 0)
		{
			if (count <= 0)
				std::cout << "You have to add a contact before search" << std::endl;
			else
			{
				contact->com_search(contact, count);
				index = choose_index(contact, count) - 1;
				contact->print_index(index, contact);
			}
		}
		else
			std::cout << "Please enter a good input." << std::endl;
	}
	std::cout << "End of White Pages." << std::endl;
	std::cout << "Thanks for your utilisation !" << std::endl;
}
