/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoore <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 14:49:45 by smoore            #+#    #+#             */
/*   Updated: 2025/04/06 17:15:04 by smoore           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/data.h"

static int	open_files(std::string inFile, std::string outFile,
	std::ifstream *ifs, std::ofstream *ofs)
{
	ifs->open(inFile.c_str(), std::fstream::in);
	ofs->open(outFile.c_str(), std::fstream::out);
	if (!ifs || !ofs)
	{
		std::cerr << "Open Files failed." << std::endl;
		(*ifs).close();
		(*ofs).close();
		return (1);
	}
	return (0);
}

void	replacer(char **av, std::ifstream *ifs, std::ofstream *ofs)
{
	std::string		line;
	std::string		s1 = av[2];
	std::string		s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "The find string is empty." << std::endl;
		while(std::getline(*ifs, line))
		{
			*ofs << line << std::endl;
		}
		return ;
	}
	while(std::getline(*ifs, line))
	{
		size_t	pos = 0;

		while ((pos = line.find(s1, pos)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos += s2.length();
		}
		*ofs << line << std::endl;
	}
}

int	main(int ac, char **av)
{
	std::string		inFile;
	std::string		outFile;
	std::ifstream	ifs;
	std::ofstream	ofs;

	if (ac != 4)
	{
		std::cout << "Usage: <filename> <find str> <replace str>" << std::endl;
		return (0);
	}
	inFile = av[1];
	outFile = inFile + ".replace";
	if (open_files(inFile, outFile, &ifs, &ofs))
		return (1);
	replacer(av, &ifs, &ofs);
	if (ifs.bad())
	{
		ifs.close();
		std::cerr << "Read file error." << std::endl;
		return (2);
	}
	if (ofs.bad())
	{
		ofs.close();
		std::cerr << "Write file error." << std::endl;
		return (3);
	}
	ifs.close();
	ofs.close();
	if (ifs.is_open())
	{
		std::cerr << "Read file stream could not be closed." << std::endl;
		return (4);
	}
	if (ofs.is_open())
	{
		std::cerr << "Write file stream could not be closed." << std::endl;
		return (5);
	}
	return (0);
}
