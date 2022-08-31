/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 14:32:42 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/31 10:30:05 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	checkLeaks(char **av)
{
	const std::string	leakCommand = "leaks " + std::string(av[0] + 2) + "| grep -R '^Process '";
	system(leakCommand.c_str());
}

int	main(int ac, char **av)
{
	(void) ac;

	std::cout << "◻️◻️◻️◻️◻️◻️  MATERIA SOURCE ◻️◻️◻️◻️◻️◻️" << std::endl;
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << "◻️◻️◻️◻️◻️◻️  EQUIPING MATERIAS ◻️◻️◻️◻️◻️◻️" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");

	me->equip(tmp);

	tmp = src->createMateria("cure");

	me->equip(tmp);

	std::cout << "◻️◻️◻️◻️◻️◻️  USING MATERIAS ◻️◻️◻️◻️◻️◻️" << std::endl;
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "◻️◻️◻️◻️◻️◻️  FREEING INSTANCES ◻️◻️◻️◻️◻️◻️" << std::endl;
	delete bob;
	delete me;
	delete src;

	checkLeaks(av);

	return EXIT_SUCCESS;
}
