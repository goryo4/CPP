/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:52:56 by ygorget           #+#    #+#             */
/*   Updated: 2025/02/24 15:22:26 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "IT MUST HAVE LEATS 2 ARGUMENT" << std::endl;
		return (0);
	}
	for (int i = 1; argv[i]; ++i){
		for (int j = 0; argv[i][j]; ++j){
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				argv[i][j] = std::toupper(argv[i][j]);	
		}
		std::cout << argv[i] ;
	}
	std::cout << std::endl;
	return (0);
}
