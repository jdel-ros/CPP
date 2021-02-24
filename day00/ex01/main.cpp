/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:02:58 by juan              #+#    #+#             */
/*   Updated: 2021/02/24 16:24:38 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include "Contact.hpp"

void	com_search(Contact contact[8], int count)
{
	int i = 0;
	while (i < count)
	{
		std::cout << std::endl;
		std::cout << "index : " << contact[i].index << " |";
		contact[i].print_search(contact[i].first_name);
		contact[i].print_search(contact[i].last_name);
		contact[i].print_search(contact[i].nickname);
		i++;
	}
	std::cout << std::endl;
}

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

void	print_index(int index, Contact contact[8])
{
	std::cout << std::endl;
	std::cout << "First name : " << contact[index].first_name << std::endl;
	std::cout << "Last name : " << contact[index].last_name << std::endl;
	std::cout << "Nickname : " << contact[index].nickname << std::endl;
	std::cout << "Login : " << contact[index].login << std::endl;
	std::cout << "Postal address : " << contact[index].adress << std::endl;
	std::cout << "Email address : " << contact[index].email << std::endl;
	std::cout << "Phone number : " << contact[index].phone << std::endl;
	std::cout << "Birthday date : " << contact[index].birthday << std::endl;
	std::cout << "Favorite meal : " << contact[index].meal << std::endl;
	std::cout << "Underwear color : " << contact[index].underwear << std::endl;
	std::cout << "Darkest secret : " << contact[index].secret << std::endl;
	std::cout << std::endl;
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
				com_search(contact, count);
				index = choose_index(contact, count) - 1;
				print_index(index, contact);
			}
		}
		else
			std::cout << "Please enter a good input." << std::endl;
	}
	std::cout << "End of White Pages." << std::endl;
	std::cout << "Thanks for your utilisation !" << std::endl;
}
