/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:21:50 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 15:22:14 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ): Form("Shrubbery", 145, 137)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ): Form(src)
{

}

ShrubberyCreationForm & ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	(void)rhs;
	return *this;
}
