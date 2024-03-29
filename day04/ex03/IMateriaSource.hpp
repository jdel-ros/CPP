/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 08:06:20 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/16 09:13:45 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include "iostream"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class IMateriaSource
{

public:

	virtual ~IMateriaSource() {};
	virtual void learnMateria(AMateria* materia) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;

};

#endif