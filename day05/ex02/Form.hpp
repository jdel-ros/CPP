/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 13:19:49 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 15:57:18 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
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
	~Form( void );
	Form( const std::string name, int gradeSigned, int gradeExecute );
	Form( Form const & src );

	Form & operator=( Form const & rhs );
	int	getGradeSigned( void ) const { return this->_gradeSigned; };
	int	getGradeExecute( void ) const { return this->_gradeExecute; };
	bool getSigned( void ) const { return this->_signed; };
	const std::string getName( void ) const { return this->_name; };
	void incrementGrade( void );
	void decrementGrade( void );
	void beSigned( Bureaucrat & src );
	virtual execute (Bureaucrat const & executor) const

private:

	Form( void );
	const std::string _name;
	const int _gradeSigned;
	const int _gradeExecute;
	bool _signed;

};

std::ostream &		operator<<( std::ostream & o, Form const & i );

#endif
