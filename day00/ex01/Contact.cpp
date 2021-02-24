/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:22:33 by juan              #+#    #+#             */
/*   Updated: 2021/02/24 13:17:07 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void )
{
}

Contact::~Contact( void )
{
}

void		Contact::add(int count)
{
	std::cout << std::endl;
	std::cout << "You have to put some information about your contact. Please write the good information and push enter." << std::endl;

	std::cout << std::endl;
	std::cout << "First name : ";
	std::getline(std::cin, this->first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, this->last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->nickname);
	std::cout << "Login : ";
	std::getline(std::cin, this->login);
	std::cout << "Postal address : ";
	std::getline(std::cin, this->adress);
	std::cout << "Email address : ";
	std::getline(std::cin, this->email);
	std::cout << "Phone number : ";
	std::getline(std::cin, this->phone);
	std::cout << "Birthday date : ";
	std::getline(std::cin, this->birthday);
	std::cout << "Favorite meal : ";
	std::getline(std::cin, this->meal);
	std::cout << "Underwear color : ";
	std::getline(std::cin, this->underwear);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->secret);
	this->index = count + 1;

	std::cout << std::endl;
	std::cout << "Thanks, the contact : \"" << this->nickname << "\" is well recorded at the index " << this->index << std::endl;
	std::cout << std::endl;
}

void		Contact::print_search(std::string str)
{
	char buffer[11];

	for (int i = 0; i < 10; i++)
		buffer[i] = ' ';
	buffer[10] = '\0';
	if (str.length() > 10)
	{
		str.copy(buffer, 9, 0);
		buffer[9] = '.';
	}
	else
		str.copy(buffer, str.length(), 0);
	std::cout << buffer << "|";
}
