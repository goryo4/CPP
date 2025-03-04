/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:02:59 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 15:16:09 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
    private:
        class Fixed x;
		class Fixed y;
    public:
		Point();
        Point(float x, float y);
        Point(Fixed x, Fixed y);
        Point operator=(Point& A);
        ~Point();

		Fixed getx()const;
		Fixed gety()const;
};

bool    bsp(Point const a, Point const b, Point const c, Point const point);

#endif