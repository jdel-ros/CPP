/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:22:33 by juan              #+#    #+#             */
/*   Updated: 2021/02/22 14:31:31 by juan             ###   ########lyon.fr   */
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

void		Contact::add()
{
	std::cout << "You have to put some information about your contact. Please write the good information and push enter." << std::endl;

	std::cout << "Fist name : ";
	std::cin >> this->first_name;
	std::cout << "Last name : ";
	std::cin >> this->last_name;
	std::cout << "Nickname : ";
	std::cin >> this->nickname;
	std::cout << "Login : ";
	std::cin >> this->login;
	std::cout << "Postal address : ";
	std::cin >> this->adress;
	std::cout << "Email address : ";
	std::cin >> this->email;
	std::cout << "Phone number : ";
	std::cin >> this->phone;
	std::cout << "Birthday date : ";
	std::cin >> this->birthday;
	std::cout << "Favorite meal : ";
	std::cin >> this->meal;
	std::cout << "Underwear color : ";
	std::cin >> this->underwear;
	std::cout << "Darkest secret : ";
	std::cin >> this->secret;

	std::cout << "Thanks, the contact : " << this->nickname << "is well recorded" << std::endl;
}

void		Contact::print_search(int count, Contact *contact)
{
	int i = 0;
	int j = 0;
	char aff_first_name[12];
	aff_first_name[11] = '\0';
	while (contact[i].first_name[j])
	{
		aff_first_name[j] = contact[i].first_name[j];
		j++;
	}
	while (aff_first_name[j])
	{
		aff_first_name[j] = ' ';
		j++;
	}
	std::cout << aff_first_name << "|" << std::endl;
	i++;
}
