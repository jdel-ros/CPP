/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:44:45 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/03/09 10:07:35 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int			main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "don't troll dude" << std::endl;
		return (0);
	}
	if (argv[1] == NULL || argv[2] == NULL || argv[3] == NULL)
	{
		std::cout << "don't troll dude" << std::endl;
		return (0);
	}

	std::string newFile;
	std::string buf;
	newFile = argv[1];
	newFile.append(".replace");
	std::ifstream ifs(argv[1]);
	std::ofstream ofs(newFile);
	size_t	pos = 0;

	if (std::string(argv[2]).compare(argv[3]) == 0)
	{
		while (std::getline(ifs, buf))
		{
			ofs << buf;
			if (!ifs.eof())
				ofs << std::endl;
		}
		return (0);
	}
	else 
	{
		while (std::getline(ifs, buf))
		{
			while (!buf.empty())
			{
				if ((pos = buf.find(argv[2], pos)) != std::string::npos)
					buf.replace(pos, std::string(argv[2]).size(), argv[3]);
				ofs << buf.substr(0, pos);
				buf.erase(0, pos);
				pos = 0;
			}
			if (!ifs.eof())
				ofs << std::endl;
		}
	}
	return (0);
}
