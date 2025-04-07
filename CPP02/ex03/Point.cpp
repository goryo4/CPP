/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:36:00 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/03 13:36:17 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed   Point::getx() const{return x;}

Fixed   Point::gety() const{return y;}

Point::Point (float _x, float _y): x(_x), y(_y){}

Point::Point (const Fixed _x, const Fixed _y): x(_x), y(_y){}

Point::~Point(){
    //std::cout << "destructor called\n";
}