/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:19:49 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/02 12:05:48 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <stdbool.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

public:

	class GradeTooHighException: std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class GradeTooLowException: std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	class FormNotSigned: std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	~Form( void );
	Form( const std::string name, int gradeSigned, int gradeExecute );
	Form( Form const & src );

	Form & operator=( Form const & rhs );
	int	getGradeSigned( void ) const;
	int	getGradeExecute( void ) const;
	bool getSigned( void ) const;
	const std::string getName( void ) const;
	const std::string getTarget( void ) const;
	void setTarget( std::string str );
	void incrementGrade( void );
	void decrementGrade( void );
	void beSigned( Bureaucrat & src );
	int TryExecute (Bureaucrat const & executor) const;
	virtual void _execute (Bureaucrat const & executor) const = 0;

private:

	Form( void );
	std::string _target;
	const std::string _name;
	const int _gradeSigned;
	const int _gradeExecute;
	bool _signed;

};

std::ostream &		operator<<( std::ostream & o, Form const & i );

#endif
