/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 14:12:24 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/27 17:01:39 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	new_file(std::string line, std::ofstream &outfile, std::string	s1, std::string	s2)
{
	for (std::string::iterator str = line.begin(); str != line.end(); ++str)
	{
		size_t i = 0;
		if (*str == s1[i])
		{
			for (int j = 0; str[j] && s1[i] && str[j] == s1[i]; ++j)
				i++;
			if (i == s1.length())
			{
				outfile << s2;
				str += i - 1;
			}
			else
				outfile << *str;
		}
		else
			outfile << *str;
	}
}

std::string	line_in_file(std::ifstream& infile)
{	
	std::string line;
	std::string all_line;
	int	i = 0;
	
	while (getline(infile, line)) {
		if (i++ != 0)
			all_line = all_line + "\n";
		all_line = all_line + line;
	}
	if (line.empty() && i != 0)
		all_line = all_line + "\n";
	return (all_line);
}
	
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "I want 3 arguments please" << std::endl;
		return (1);
	}
	std::string	replace = ".replace";
	std::string	filename = argv[1] + replace;
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	std::string all_line;
		
	std::ifstream infile(argv[1]);
	if (!infile){
		std::cerr << "error on the infile" << std::endl;
		return (1);
	}
	all_line = line_in_file(infile);
	std::ofstream outfile(filename.c_str());
	if (!outfile)
	{
		std::cerr << "error on the outfile" << std::endl;
		return (1);
	}
	new_file(all_line, outfile, s1, s2);
	infile.close();
	outfile.close();
	return (0);
}