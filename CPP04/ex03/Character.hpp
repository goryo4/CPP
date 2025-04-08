/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yolan <yolan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:58:09 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/07 19:15:53 by yolan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"


class Character : public ICharacter
{
    private:
        std::string _name;
        AMateria* bag[4];
    public:
        Character();
        Character(std::string const &name);
        Character(Character const &character);
        Character& operator=(Character const &character);
        ~Character();
        
        std::string const &getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif