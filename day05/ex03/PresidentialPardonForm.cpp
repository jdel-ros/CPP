/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:09:09 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 10:25:41 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string target ): Form("Presidential", 25, 5)
{
	setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{

}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ): Form(src)
{

}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs )
{
	(void)rhs;
	return *this;
}

void PresidentialPardonForm::_execute( Bureaucrat const & executor ) const
{
	(void)executor;
	std::cout << getTarget() << " was forgiven by Zafod Beeblebrox" << std::endl;
}