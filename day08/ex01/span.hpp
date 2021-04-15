/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:01:04 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/15 09:00:57 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>

class Span
{

public:

	Span(unsigned int n);
	~Span( void );
	Span( Span const & src );
	Span & operator=( Span const & rhs );

	void	addNumber( long int i );
	void	addNumberEasier( long int i, long int j );
	void	printNumber( void );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );

private:

	Span( void );
	unsigned int _n;
	std::vector<int>	_vector;

};

std::ostream & 			operator<<( std::ostream & o, Span const & i );

#endif