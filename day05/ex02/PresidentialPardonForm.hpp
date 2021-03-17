/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:04:38 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/17 15:18:46 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{

public:

	~PresidentialPardonForm( void );
	PresidentialPardonForm( const std::string target );
	PresidentialPardonForm( PresidentialPardonForm const & src );

	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );

private:

	PresidentialPardonForm( void );

};

#endif