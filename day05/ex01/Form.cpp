/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:36:37 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 09:42:43 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string name, int gradeSigned, int gradeExecute ): _name(name), _gradeSigned(gradeSigned), _gradeExecute(gradeExecute), _signed(false)
{
	try
	{
		if (_gradeExecute < 1)
			throw GradeTooHighException();
		if (_gradeSigned < 1)
			throw GradeTooHighException();
		if (_gradeExecute > 150)
			throw GradeTooLowException();
		if (_gradeSigned > 150)
			throw GradeTooLowException();
	}
	catch(const GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Form::~Form( void )
{

}

Form::Form( Form const & src ): _name(src._name), _gradeSigned(src._gradeSigned), _gradeExecute(src._gradeExecute), _signed(src._signed)
{
	*this = src;
}

Form & Form::operator=( Form const & rhs )
{
	(void)rhs;
	return *this;
}

std::ostream &		operator<<( std::ostream & o, Form const & i )
{
	o << "Form " << i.getName() << ", grade signed : " << i.getGradeSigned()  << ", grade execute : " << i.getGradeExecute() << " signed : " << i.getSigned() << std::endl;
	return o;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high !");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low !");
}

void	Form::beSigned( Bureaucrat & src )
{
	try
	{
		if (src.getGrade() <= _gradeSigned)
			_signed = true;
		else
			throw GradeTooLowException();
	}
	catch(const GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	src.SignForm(this);
}
