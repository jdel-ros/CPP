/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 09:18:43 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/02 11:06:07 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SAMPLE_HPP
# define SAMPLE_HPP

#include <iostream>

class Sample
{
public:

	Sample( void );
	Sample ( int const n );
	Sample( Sample const & src );
	~Sample( void );

	Sample & operator=( Sample const & rhs );
	Sample 	operator+( Sample const & rhs ) const ;

	int getN( void ) const { return this->_n; };

private:

	int _n;
};

std::ostream &		operator<<( std::ostream & o, Sample const & i );

#endif
