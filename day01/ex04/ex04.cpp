/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juan <juan@student.42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 11:44:30 by juan              #+#    #+#             */
/*   Updated: 2021/02/27 11:53:36 by juan             ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strP = &str;
	std::string &strR = str;

	std::cout << "str = " << str << std::endl;
	std::cout << "Pointeur = " << *strP << std::endl;
	std::cout << "Reference = " << strR << std::endl;
}
