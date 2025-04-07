/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:02:59 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/03 14:50:17 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        Fixed const x;
		Fixed const y;
    public:
		Point();
        Point(const float x, const float y);
        Point(const Fixed x, const Fixed y);
        Point operator=(const Point& A);
        ~Point();

		Fixed getx()const;
		Fixed gety()const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif