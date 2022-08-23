/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:32:42 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 11:56:29 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

void	checkLeaks(char **av)
{
	const std::string	leakCommand = "leaks " + std::string(av[0] + 2);
	system(leakCommand.c_str());
}

int	main(int ac, char **av)
{
	(void) ac;

	int			nbOfItems = 2;
	AMateria*	floorItems[nbOfItems];

	for (int i = 0; i < nbOfItems; i++)
		floorItems[i] = nullptr;

	floorItems[0] = new Ice();
	floorItems[1] = new Cure();

	ICharacter*	mage = new Character("[ 🧙‍♂️ Mage ]");
	ICharacter*	knight = new Character("[ 🛡 Knight ]");
	ICharacter*	demon = new Character("[ 👹 Demon ]");

	mage->equip(floorItems[0]);
	mage->equip(floorItems[1]);

	demon->equip(floorItems[0]);
	demon->equip(floorItems[0]);
	demon->equip(floorItems[0]);
	demon->equip(floorItems[0]);
	demon->equip(floorItems[0]);

	mage->use(0, *demon);
	demon->use(-1, *mage);

	delete mage;
	delete knight;
	delete demon;

	for (int i = 0; i < nbOfItems; i++)
		if (floorItems[i] != nullptr)
			delete floorItems[i];
	return EXIT_SUCCESS;
}
