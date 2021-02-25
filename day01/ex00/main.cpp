/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 15:20:32 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/02/25 15:34:05 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int				main(void)
{
	Pony pony;
	pony.put_height("58 inch");
	pony.put_age("5 years old");
	pony.put_weight("90kg");
	pony.put_speed("75km/h");

	pony.print_info("height");
	pony.print_info("weight");
	pony.print_info("speed");
	pony.print_info("age");
	return (0);
}