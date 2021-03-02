/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 09:57:28 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/02 10:05:19 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.hpp"

int			main(void)
{
	Sample instance1;
	Sample instance2( 32 );
	Sample instance3( 10 );
	Sample instance4( instance1 );

	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;
	std::cout << instance4 << std::endl;

	instance4 = instance2;
	instance4 = instance3 + instance4;
	std::cout << instance3 << std::endl;
	std::cout << instance4 << std::endl;

	return 0;
}