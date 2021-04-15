/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:47:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/12 10:53:37 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name)
{
	setGrade(grade);
}

Bureaucrat::~Bureaucrat( void )
{
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ): _name(src._name), _grade(src._grade)
{
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade()  << "." << std::endl;
	return o;
}

int		Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

const std::string Bureaucrat::getName( void ) const
{
	return this->_name;
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
			this->_grade = grade;
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
	try
	{
		if (this->_grade > 1)
			this->_grade -= 1;
		else
			throw GradeTooHighException();
	}
	catch(const GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}

void	Bureaucrat::decrementGrade( void )
{
	try
	{
		if (this->_grade < 150)
			this->_grade += 1;
		else
			throw GradeTooLowException();
	}
	catch(const GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}
