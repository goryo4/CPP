/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 12:58:09 by ygorget           #+#    #+#             */
/*   Updated: 2025/04/08 15:44:06 by ygorget          ###   ########.fr       */
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
        AMateria** floor;
        int size;
    public:
        Character();
        Character(std::string const &name);
        Character(Character const &character);
        Character& operator=(Character const &character);
        ~Character();
        
        std::string const &getName() const;
        int const &getSize() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif