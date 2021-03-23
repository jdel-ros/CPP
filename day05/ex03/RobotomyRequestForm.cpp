/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:20:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 10:25:49 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target ): Form("Robotomy", 75, 45)
{
	setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{

}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ): Form(src)
{

}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	(void)rhs;
	return *this;
}

void	RobotomyRequestForm::_execute( Bureaucrat const & executor ) const
{
	(void)executor;
	std::cout << "SBRRRR SBRRRR SBRRRR !!!" << std::endl;
	std::cout << getTarget() << " has been robotomized." << std::endl;
}	