/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:21:14 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/23 10:42:33 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{

public:

	~ShrubberyCreationForm( void );
	ShrubberyCreationForm( const std::string target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	void _execute (Bureaucrat const & executor) const;

	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );

private:

	ShrubberyCreationForm( void );

};

#endif