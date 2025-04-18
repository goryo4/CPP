/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 15:52:20 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/18 15:59:49 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data* R2 = new Data(5);

    uintptr_t raw = Serializer::serialize(R2);
    Data* D2 = Serializer::deserialize(raw);
    
    if (R2 == D2)
        std::cout << "same pointer\n";
	else
		std::cout << "not same pointer\n";
		
}