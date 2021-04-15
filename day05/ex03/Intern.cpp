/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:54:03 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/12 13:10:53 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern( void )
{

}

Intern::~Intern( void )
{

}

Intern::Intern( Intern const & src )
{
	*this = src;
}

Intern & Intern::operator=( Intern const & rhs )
{
	(void)rhs;
	return *this;
}

Form * Intern::createPresidential( std::string target )
{
	return new PresidentialPardonForm( target );
}

Form * Intern::createRobotomy( std::string target )
{
	return new RobotomyRequestForm( target );
}

Form * Intern::createShrubbery( std::string target )
{
	return new ShrubberyCreationForm( target );
}

Form * Intern::makeForm( std::string name, std::string target )
{
	Form	*(Intern::*ptr[])( std::string target) =
	{
		&Intern::createPresidential,
		&Intern::createRobotomy,
		&Intern::createShrubbery,
	};
	std::string		_name[] =
	{
		"presidential pardon",
		"robotomy request",
		"shruberry creation"
	};
	for (int i = 0; i < 3; i++)
	{
		if (name == _name[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*ptr[i])(target);
		}
	}
	std::cout << "Intern cannot create form." << std::endl;
	return NULL;
}
