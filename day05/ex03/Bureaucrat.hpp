/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:42:26 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/12 10:51:37 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Form;

class Bureaucrat
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
	class FormNotExecute: std::exception
	{
		public:
			virtual const char* what() const throw();
	};
	~Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );

	Bureaucrat & operator=( Bureaucrat const & rhs );
	int	getGrade( void ) const { return this->_grade; };
	std::string getName( void ) const { return this->_name; };
	void setGrade( int grade );
	void incrementGrade( void );
	void decrementGrade( void );
	void SignForm( Form *src );
	void executeForm(Form const & form);

private:

	Bureaucrat( void );
	const std::string _name;
	int _grade;

};

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i );

#endif
