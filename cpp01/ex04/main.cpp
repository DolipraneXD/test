/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-fat <moel-fat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:07:42 by moel-fat          #+#    #+#             */
/*   Updated: 2024/10/26 17:37:36 by moel-fat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void ft_replace(std::string line, std::string s1, std::string s2, std::ofstream& outfile)
{
	size_t start = 0;
	size_t found = 0;
	std::string tmp;

	while((found = line.find(s1, start)) != std::string::npos)
	{
		tmp += line.substr(start, found - start)+ s2;
		start = found + s1.length();
	}
	tmp += line.substr(start);
	outfile << tmp << '\n';
}

int main(int ac, char **av)
{

	std::string filename;
	std::string s1;
	std::string s2;


	if (ac != 4)
	{
		std::cerr << "error: need 3 argument" << std::endl;
		return (1);
	}

	filename = av[1];
	s1 = av[2];
	s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 cannot be empty" << std::endl;
		return (1);
	}
	std::ifstream infile(filename);
	if (!infile)
	{
		std::cerr << "Error: cannot open filename" << std::endl;
		return (1);
	}
	std::ofstream outfile(filename + ".replace");
	std::string line;

	while (std::getline(infile, line))
	{
		ft_replace(line, s1, s2, outfile);
	}
	infile.close();
	outfile.close();
	return (0);
}
