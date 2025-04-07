/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:33:01 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/07 15:04:43 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class   Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
		Brain(Brain& a);
		Brain& operator=(Brain& a);
		~Brain();

        void    setIdeas(Animal& a);
};


#endif