/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:07:22 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/22 12:30:17 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template <typename T>
void    swap(T &a, T &b){
    T tmp = a;
    a = b;
   	b = tmp;
}

template <typename T>
T   min(T a, T b){
    return (a < b) ? a : b;
}

template <typename T>
T   max(T a, T b){
    return (a > b) ? a : b;
}

#endif