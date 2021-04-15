/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdel-ros <jdel-ros@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 15:14:06 by jdel-ros          #+#    #+#             */
/*   Updated: 2021/04/14 15:23:24 by jdel-ros         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

struct bl
{
	bool _char;
	bool _int;
	bool _str;
	bool _float;
	bool _impossible;
	bool _max_inf_int;
	bool _min_inf_int;
	bool _max_inf_double;
	bool _min_inf_double;
	bool _max_inf_float;
	bool _min_inf_float;
	bool _nan;
	bool _f;
	bool _p;
	unsigned long size_float;
};

int		to_float(char *argv, bl bl)
{
	double tmp;
	int size = static_cast<int>(bl.size_float);
	float ret = 0.0f;
	std::string str = argv;
	if (bl._nan)
	{
		std::cout << "float: nanf" << std::endl;
		return (0);
	}
	if (bl._max_inf_float)
	{
		std::cout << "float: +inff" << std::endl;
		return (0);
	}
	if (bl._min_inf_float)
	{
		std::cout << "float: -inff" << std::endl;
		return (0);
	}
	if (bl._impossible)
	{
		std::cout << "float: impossible" << std::endl;
		return (0);
	}
	if (bl._float || bl._int || bl._char)
	{
		if (bl._char)
			ret = static_cast<float>(argv[0]);
		else
		{
			tmp = atof(argv);
			ret = static_cast<float>(tmp);
		}
		std::cout << std::fixed;
		std::cout << std::setprecision(size) << "float: " << ret << "f" << std::endl;
	}
	else if (bl._str)
		std::cout << "float: impossible" << std::endl;
	return (0);
}

int		to_double(char *argv, bl bl)
{
	double ret = 0.0;
	int size = static_cast<int>(bl.size_float);
	std::string str = argv;
	if (bl._nan)
	{
		std::cout << "double: nan" << std::endl;
		return (0);
	}
	if (bl._max_inf_double)
	{
		std::cout << "double: +inf" << std::endl;
		return (0);
	}
	if (bl._min_inf_double)
	{
		std::cout << "double: -inf" << std::endl;
		return (0);
	}
	if (bl._impossible)
	{
		std::cout << "double: impossible" << std::endl;
		return (0);
	}
	if (bl._float || bl._int || bl._char)
	{
		if (bl._char)
			ret = static_cast<double>(argv[0]);
		else
			ret = atof(argv);
		std::cout << std::fixed;
		std::cout << std::setprecision(size) << "double: " << ret << std::endl;
	}
	else if (bl._str)
		std::cout << "double: impossible" << std::endl;
	return (0);
}

int		to_int(char *argv, bl bl)
{
	int ret = 0;
	double tmp = 0;
	std::cout << "int: ";
	if (bl._max_inf_int || bl._min_inf_int || bl._impossible)
	{
		std::cout << "impossible" << std::endl;
		return (0);
	}
	if (bl._char)
	{
		ret = static_cast<int>(argv[0]);
		std::cout << ret << std::endl;
	}
	else if (bl._int)
	{
		ret = atoi(argv);
		std::cout << ret << std::endl;
	}
	else if (bl._str)
		std::cout << "impossible" << std::endl;
	else if (bl._float)
	{
		tmp = strtod(argv, NULL);
		ret = static_cast<int>(tmp);
		std::cout << ret << std::endl;
	}
	return (0);
}

int		to_char(char *argv, bl bl)
{
	char ret = 0;
	int tmp = 0;
	std::cout << "char: ";
	if (bl._char)
	{
		ret = argv[0];
		std::cout << '\'' << ret << '\'' << std::endl;
	}
	else if (bl._str)
		std::cout << "impossible" << std::endl;
	else
	{
		tmp = atoi(argv);
		char ret = static_cast<char>(tmp);
		if (isprint(ret))
			std::cout << '\'' << ret << '\'' << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	return (0);
}

int		is_limit(char *argv, bl *bl)
{
	double tmp = strtod(argv, NULL);
	if (tmp > std::numeric_limits<int>::max()) 
		bl->_max_inf_int = true;
	if (tmp < std::numeric_limits<int>::min()) 
		bl->_min_inf_int = true;
	if (tmp > std::numeric_limits<float>::max()) 
		bl->_max_inf_float = true;
	if (tmp < -std::numeric_limits<float>::max() + 1) 
		bl->_min_inf_float = true;
	if (tmp > std::numeric_limits<double>::max()) 
		bl->_max_inf_double = true;
	if (tmp < -std::numeric_limits<double>::max() + 1) 
		bl->_min_inf_double = true;
	if (tmp != tmp)
		bl->_nan = true;
	return (0);
}

void		init_bool(bl *bl)
{
	bl->_char = false;
	bl->_int = false;
	bl->_str = false;
	bl->_float = false;
	bl->_impossible = false;
	bl->_max_inf_int = false;
	bl->_min_inf_int = false;
	bl->_max_inf_double = false;
	bl->_min_inf_double = false;
	bl->_max_inf_float = false;
	bl->_min_inf_float = false;
	bl->_nan = false;
	bl->_f = false;
	bl->_p = false;
}

int		main(int argc, char **argv)
{
	bl bl;
	bl.size_float = 1;
	std::string buf;
	unsigned int j = 1;
	if (argc != 2)
	{
		std::cout << "Error: Arguments" << std::endl;
		return (1);
	}
	init_bool(&bl);
	is_limit(argv[1], &bl);
	std::string str = argv[1];
	if (isprint(str[0]))
	{
		if (str.length() == 1 && isprint(str[0]))
			bl._char = true;
		else if (isdigit(str[0]) || str[0] == '-' || str[0] == '+')
		{
			while (isdigit(str[j]))
				j++;
			if (j == str.length())
				bl._int = true;
			for (unsigned long i = 1; i < str.length(); i++)
			{
				if (isdigit(str[i]) == 0)
				{
					if (str[i] == 'f')
					{
						bl._float = true;
						if (bl._f == false)
							bl._f = true;
						else
							bl._impossible = true;
					}
					else if (str[i] == '.')
					{
						bl._float = true;
						if (bl._p == false)
							bl._p = true;
						else
							bl._impossible = true;
					}
					else if (str[i] != 'e' && str[i] != '-' && str[i] != '+')
					{
						std::cout << str[i] << std::endl;
						bl._impossible = true;
						break;
					}
				}
			}
		}
		else if (str.length() > 1)
			bl._str = true;;
	}
	else
		bl._impossible = true;
	if (bl._float && bl._impossible == false)
	{
		unsigned int i = 0;
		while (str[i] != '.')
			i++;
		i++;
		while (isdigit(str[i]))
		{
			bl.size_float++;
			i++;
		}
		if (bl.size_float > 1)
			bl.size_float--;
	}
	std::cout << std::numeric_limits<float>::max() << std::endl;
	to_char(argv[1], bl);
	to_int(argv[1], bl);
	to_float(argv[1], bl);
	to_double(argv[1], bl);
	return (0);
}
