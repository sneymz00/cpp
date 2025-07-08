/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camurill <camurill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 18:51:25 by camurill          #+#    #+#             */
/*   Updated: 2025/07/08 19:42:21 by camurill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int replace(char **ag, std::string str)
{
	std::ofstream	file;
	int				next;

	file.open((std::string(ag[1]) + ".replace").c_str());
	if (file.fail())
		return (1);
	for (int i = 0; i < (int)str.size(); i++)
	{
		next = str.find(ag[2], i);
		if (next != -1 && next == i)
		{
			file << ag[3];
			i += std::string(ag[2]).size() - 1;
		}
		else
			file << str[i];
	}
	file.close();
	return (0);
}

int main(int ac, char **ag)
{
	char			str;
	std::ifstream	file;
	std::string		string;

	if (ac != 4)
	{
		std::cout << "Pls, check arguments: invalid format: <file> <string1>";
		std::cout << " <string2>" << std::endl;
		return (1);
	}
	file.open(ag[1]);
	if (file.fail())
	{
		std::cout << "Error: " << ag[1];
		std::cout << ": no such file or directory" << std::endl;
		return (1);
	}
	while(!file.eof() && file >> std::noskipws >> str)
		string += str;
	file.close();
	return (replace(ag, string));
}
