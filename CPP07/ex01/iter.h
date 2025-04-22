/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:32:24 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/22 13:00:10 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void    iter(T *array, int size, void (*fon)(T)){
    for (int i = 0; i < size; ++i){
        fon(array[i]);
    }
}

template <typename T>
void    print(T val){
    std::cout << val << std::endl;
}

#endif