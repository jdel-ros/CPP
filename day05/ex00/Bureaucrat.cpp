/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:47:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 12:40:17 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name)
{
	setGrade(grade);
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Bureaucrat " << this->_name << " died !" << std::endl;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	std::cout << "Constructor Copy have been called" << std::endl;
	*this = src;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	std::cout << "Assignement = have been called" << std::endl;
	this->_grade = rhs._grade;
	this->_name = rhs._name;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade()  << "." << std::endl;
	return o;
}

void	Bureaucrat::setGrade( int grade )
{
	try
	{
		if (grade < 1)
		{
			throw GradeTooHighException();
		}
		else if (grade > 150)
		{
			throw GradeTooLowException();
		}
		else
		{
			_grade = grade;
			return ;
		}
	}
	catch(const GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::incrementGrade( void )
{
	if (this->_grade > 1)
		this->_grade -= 1;
}

void	Bureaucrat::decrementGrade( void )
{
	if (this->_grade < 150)
		this->_grade += 1;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}