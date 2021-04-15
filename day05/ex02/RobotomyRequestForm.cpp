/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:20:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/02 12:00:20 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target ): Form("Robotomy", 72, 45)
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
	int i = std::rand() % 2;
	if (i == 1)
	{
		std::cout << "SBRRRR SBRRRR SBRRRR !!!" << std::endl;
		std::cout << getTarget() << " has been robotomized." << std::endl;
	}
	else
	{
		std::cout << "failed for robotomized " << getTarget() << "." << std::endl;
	}
}	