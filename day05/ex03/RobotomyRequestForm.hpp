/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:19:39 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 10:01:20 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{

public:

	~RobotomyRequestForm( void );
	RobotomyRequestForm( const std::string target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	void _execute (Bureaucrat const & executor) const;

	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );

private:

	RobotomyRequestForm( void );

};

#endif