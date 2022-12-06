/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 14:07:41 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 10:11:56 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		std::cout << std::endl << " ==-== DEFAULT MAIN ==-== " << std::endl << std::endl;
		Animal*	animal = new Animal();
		Animal*	dog = new Dog();
		Animal*	cat = new Cat();

		animal->makeSound();
		dog->makeSound();
		cat->makeSound();

		delete animal;
		delete dog;
		delete cat;
	}

	{
		std::cout << std::endl << " ==-== WRONG MAIN ==-== " << std::endl << std::endl;
		WrongAnimal*	animal = new WrongAnimal();
		WrongAnimal*	cat = new WrongCat();

		animal->makeSound();
		cat->makeSound();

		delete animal;
		delete cat;

		std::cout << std::endl;
	}


	return EXIT_SUCCESS;
}
