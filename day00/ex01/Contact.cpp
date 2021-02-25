/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 11:22:33 by juan              #+#    #+#             */
/*   Updated: 2021/02/25 14:32:52 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <regex>
#include <cstring>
#include "Contact.hpp"
# define REG_ALPHA "[a-zA-Z- ]+"
# define REG_LETTER "[a-zA-Z,.!?-;: ]+"
# define REG_ALNUM "[a-zA-Z0-9- ]+"
# define REG_ALNUMAT "[a-zA-Z0-9- @.]+"
# define REG_NUM "[0-9 ]+"
# define REG_NUMSL "[0-9/.]+"

Contact::Contact( void )
{
}

Contact::~Contact( void )
{
}

int Contact::setFirstName( std::string str )
{
	if (std::regex_match(str, std::regex(REG_ALPHA)) == 0)
	{
		std::cout << "You can put only char alpha, space and hyphen" << std::endl;
		return (1);
	}
	else
		this->_first_name = str;
	return (0);
}

int Contact::setLastName( std::string str )
{
	if (std::regex_match(str, std::regex(REG_ALPHA)) == 0)
	{
		std::cout << "You can put only char alpha, space and hyphen" << std::endl;
		return (1);
	}
	else
		this->_last_name = str;
	return (0);
}

int Contact::setNickname( std::string str )
{
	if (std::regex_match(str, std::regex(REG_ALNUM)) == 0)
	{
		std::cout << "You can put only char alphanumeric, space and hyphen" << std::endl;
		return (1);
	}
	else
		this->_nickname = str;
	return (0);
}

int Contact::setLogin( std::string str )
{
	if (std::regex_match(str, std::regex(REG_ALPHA)) == 0)
	{
		std::cout << "You can put only char alpha, space and hyphen" << std::endl;
		return (1);
	}
	else
		this->_login = str;
	return (0);
}

int Contact::setAdress( std::string str )
{
	if (std::regex_match(str, std::regex(REG_ALNUM)) == 0)
	{
		std::cout << "You can put only char alphanumeric, space and hyphen" << std::endl;
		return (1);
	}
	else
		this->_adress = str;
	return (0);
}

int	Contact::setEmail( std::string str )
{
	if (std::regex_match(str, std::regex(REG_ALNUMAT)) == 0)
	{
		std::cout << "You can put only char alphanumeric, space, hyphen, at and point" << std::endl;
		return (1);
	}
	else
		this->_email = str;
	return (0);
}

int	Contact::setPhone( std::string str )
{
	if (std::regex_match(str, std::regex(REG_NUM)) == 0)
	{
		std::cout <<"You can put only char numeric" << std::endl; 
		return (1);
	}
	else
		this->_phone = str;
	return (0);
}

int	Contact::setBirthday( std::string str )
{
	if (std::regex_match(str, std::regex(REG_NUMSL)) == 0)
	{
		std::cout << "You can put only char alphanumeric, slash and point" << std::endl;
		return (1);
	}
	else
		this->_birthday = str;
	return (0);
}

int	Contact::setMeal( std::string str)
{
	if (std::regex_match(str, std::regex(REG_LETTER)) == 0)
	{
		std::cout << "You can put only char alpha and punctuation" << std::endl;
		return (1);
	}
	else
		this->_meal = str;
	return (0);
}

int	Contact::setUnderwear( std::string str)
{
	if (std::regex_match(str, std::regex(REG_LETTER)) == 0)
	{
		std::cout << "You can put only char alpha and punctuation" << std::endl;
		return (1);
	}
	else
		this->_underwear = str;
	return (0);
}

int	Contact::setSecret( std::string str)
{
	if (std::regex_match(str, std::regex(REG_LETTER)) == 0)
	{
		std::cout << "You can put only char alpha and punctuation" << std::endl;
		return (1);
	}
	else
		this->_secret = str;
	return (0);
}

void Contact::setIndex( int i )
{
	this->_index = i;
}

void		Contact::add(int count)
{
	std::string buf;
	std::cout << std::endl;
	std::cout << "You have to put some information about your contact. Please write the good information and push enter." << std::endl;

	std::cout << std::endl;
	while (1)
	{
		std::cout << "First name : ";
		std::getline(std::cin, buf);
		if (setFirstName(buf) == 0)
			break;
	}
	while (1)
	{
		std::cout << "Last name : ";
		std::getline(std::cin, buf);
		if (setLastName(buf) == 0)
			break;
	}
	while (1)
	{
		std::cout << "Nickname : ";
		std::getline(std::cin, buf);
		if (setNickname(buf) == 0)
			break;
	}
	while (1)
	{
		std::cout << "Login : ";
		std::getline(std::cin, buf);
		if (setLogin(buf) == 0)
			break;
	}	
	while (1)
	{
		std::cout << "Postal address : ";
		std::getline(std::cin, buf);
		if (setAdress(buf) == 0)
			break;
	}
	while (1)
	{
		std::cout << "Email address : ";
		std::getline(std::cin, buf);
		if (setEmail(buf) == 0)
			break;
	}

	while (1)
	{
		std::cout << "Phone number : ";
		std::getline(std::cin, buf);
		if (setPhone(buf) == 0)
			break;	
	}
	while (1)
	{
		std::cout << "Birthday date : ";
		std::getline(std::cin, buf);
		if (setBirthday(buf) == 0)
			break;
	}
	while (1)
	{
		std::cout << "Favorite meal : ";
		std::getline(std::cin, buf);
		if (setMeal(buf) == 0)
			break;	
	}
	while (1)
	{
		std::cout << "Underwear color : ";
		std::getline(std::cin, buf);
		if (setUnderwear(buf) == 0)
			break;
	}
	while (1)
	{
		std::cout << "Darkest secret : ";
		std::getline(std::cin, buf);
		if (setSecret(buf) == 0)
			break;
	}
	setIndex(count + 1);
	std::cout << std::endl;
	std::cout << "Thanks, the contact : \"" << this->_nickname << "\" is well recorded at the index " << this->_index << std::endl;
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

void	Contact::com_search(Contact contact[8], int count) const
{
	int i = 0;
	while (i < count)
	{
		std::cout << std::endl;
		std::cout << "index : " << contact[i]._index << " |";
		contact[i].print_search(contact[i]._first_name);
		contact[i].print_search(contact[i]._last_name);
		contact[i].print_search(contact[i]._nickname);
		i++;
	}
	std::cout << std::endl;
}

void	Contact::print_index(int index, Contact contact[8]) const
{
	std::cout << std::endl;
	std::cout << "First name : " << contact[index]._first_name << std::endl;
	std::cout << "Last name : " << contact[index]._last_name << std::endl;
	std::cout << "Nickname : " << contact[index]._nickname << std::endl;
	std::cout << "Login : " << contact[index]._login << std::endl;
	std::cout << "Postal address : " << contact[index]._adress << std::endl;
	std::cout << "Email address : " << contact[index]._email << std::endl;
	std::cout << "Phone number : " << contact[index]._phone << std::endl;
	std::cout << "Birthday date : " << contact[index]._birthday << std::endl;
	std::cout << "Favorite meal : " << contact[index]._meal << std::endl;
	std::cout << "Underwear color : " << contact[index]._underwear << std::endl;
	std::cout << "Darkest secret : " << contact[index]._secret << std::endl;
	std::cout << std::endl;
}
