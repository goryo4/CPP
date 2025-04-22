/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:00:54 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/22 14:52:32 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <iostream>
#include <vector>

template <typename T>
void    easyfind(T container, int value){
    (void)value;
    for (std::vector<int>::iterator it = container.begin(); it != container.end(); ++it) {
        if (*it == value){
            std::cout << "occurence find\n";
			return ;
		}
    }
    std::cerr << "there are not occurence\n";
}

#endif