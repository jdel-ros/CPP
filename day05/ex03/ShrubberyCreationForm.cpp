/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:21:50 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 10:43:53 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ): Form("Shrubbery", 145, 137)
{
	setTarget(target);
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

void	ShrubberyCreationForm::_execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::ofstream of(this->getTarget() + "_shrubbery");
    of << "              ,@@@@@@@," << std::endl;
    of << "      ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    of << "   ,&%%&%&&%,@@@@@/@@@@@@,8888888/8o" << std::endl;
    of << "  ,%&&%&&%&&%,@@@@@@@/@@@88888888/88'" << std::endl;
    of << "  %&&%&%&/%&&%@@@/ /@@@88888888888'" << std::endl;
    of << "  %&&%/ %&%%&&@@@/ /@@' `8888/ /88'" << std::endl;
    of << "  `&%&/ /%&'     |.|         | |8'" << std::endl;
    of << "      |o|        | |         | |" << std::endl;
    of << "      |.|        | |         | |" << std::endl;
    of << "  /// /_///_/__/ /,/_//__///./ /_//__/_" << std::endl;
	of.close();
}
