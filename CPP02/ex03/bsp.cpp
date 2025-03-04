/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:39:43 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/04 15:55:32 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point vector(Point const A, Point const M){
	Point v (M.getx() - A.getx(), M.gety() - A.gety());
	return v;
}

int	vector_product_1(Point const M, Point const A, Point const B){
	Point v1 = vector(A, B);
	Point v2 = vector(A, M);
	Fixed nb(v2.gety() * v1.getx());
	Fixed nb2(v2.getx() * v1.gety());

	return nb.getRawbits() - nb2.getRawbits(); 
}

int	vector_product_2(Point const M, Point const A, Point const C){
	Point v1 = vector(A, M);
	Point v2 = vector(A, C);
	Fixed nb(v2.gety() * v1.getx());
	Fixed nb2(v2.getx() * v1.gety());

	return  nb.getRawbits() - nb2.getRawbits(); 
}

bool    bsp(Point const a, Point const b, Point const c, Point const point){
    int nb;
	int num;
	
	nb = vector_product_1(point, a, b);
    num = vector_product_2(point, a, c);

	if ((nb > 0 && num > 0) || (nb < 0 && num < 0))
		return (true);
	return (false);
}
