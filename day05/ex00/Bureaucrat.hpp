/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 10:42:26 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 12:40:31 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

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
	~Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( Bureaucrat const & src );

	Bureaucrat & operator=( Bureaucrat const & rhs );
	int	getGrade( void ) const { return this->_grade; };
	std::string getName( void ) const { return this->_name; };
	void setGrade( int grade );
	void incrementGrade( void );
	void decrementGrade( void );

private:

	Bureaucrat( void );
	std::string _name;
	int _grade;

};

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i );

#endif
