/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 10:49:18 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 14:36:08 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <stdexcept>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{

public:

	Intern( void );
	~Intern( void );
	Intern( Intern const & src );
	
	Intern & operator=( Intern const & rhs );
	Form * makeForm( std::string name, std::string target );
	Form * createPresidential( std::string target );
	Form * createRobotomy( std::string target );
	Form * createShrubbery( std::string target );

};

#endif
