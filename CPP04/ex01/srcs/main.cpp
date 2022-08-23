/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:16:53 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/22 10:40:41 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

#include <iostream>
#include <cstdlib>

void	function(unsigned int animalsCount)
{
	Animal*	animals[animalsCount];

	for (unsigned int i = 0; i < animalsCount; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (unsigned int i = 0; i < animalsCount; i++)
	{
		animals[i]->makeSound();
	}
	for (unsigned int i = 0; i < animalsCount; i++)
	{
		delete animals[i];
	}
}

int	main(int ac, char **av)
{
	(void) ac;
	const std::string	leakCommand = "leaks " + std::string(av[0] + 2);

	Cat*	cat = new Cat();

	cat->getBrain().setIdea(99, "Meow meow");
	cat->getBrain().setIdea(98, "L'oiseau je le boufferai bien");

	for (int i = 97; i < 100; i++)
		std::cout << cat->getBrain().getIdea(i) << std::endl;

	Cat*	copyCat = new Cat(*cat);

	copyCat->getBrain().setIdea(97, "Je suis le meme que l'autre la");

	for (int i = 97; i < 100; i++)
		std::cout << cat->getBrain().getIdea(i) << std::endl;
	std::cout << "---" << std::endl;
	for (int i = 97; i < 100; i++)
		std::cout << copyCat->getBrain().getIdea(i) << std::endl;

	delete cat;

	system(leakCommand.c_str());
	return (0);
}
