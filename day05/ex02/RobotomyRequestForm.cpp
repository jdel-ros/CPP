/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:20:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 15:22:32 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target ): Form("Robotomy", 75, 45)
{

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
