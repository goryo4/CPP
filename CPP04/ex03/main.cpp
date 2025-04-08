/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygorget <ygorget@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 18:24:15 by yolan             #+#    #+#             */
/*   Updated: 2025/04/08 16:32:47 by ygorget          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    AMateria* ice = new Ice();
    AMateria* wood = new Ice("wood");
    AMateria* cure = new Cure();
    AMateria* fire = new Cure("fire");
    AMateria* water = new Ice("water");

    src->learnMateria(ice);
    src->learnMateria(wood);
    src->learnMateria(cure);
    src->learnMateria(fire);
    src->learnMateria(water);
    
    ICharacter* me = new Character("me");
   
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("wood");
    me->equip(tmp);
    tmp = src->createMateria("fire");
    me->equip(tmp);
    tmp = src->createMateria("fire");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->unequip(0);
    
    delete water;
    delete ice;
    delete wood;
    delete cure;
    delete fire;
    delete bob;
    delete me;
    delete src;
    
    return 0;
}