/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 14:33:01 by ygorget           #+#    #+#             */
/*   Updated: 2025/03/28 15:09:40 by ygorget          ###   ########.fr       */
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
		Brain(const Brain& a);
		Brain& operator=(const Brain& a);
		~Brain();

        void    setIdeas(std::string idea, int i);
        std::string getIdea(int i);
};


#endif