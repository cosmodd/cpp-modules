/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:16:59 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 15:41:17 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"

Base*	generate(void)
{
	int	r = std::rand() % 3;
	if (r == 0)
		return new A;
	else if (r == 1)
		return new B;
	else
		return new C;
}

void	identify(Base* ptr)
{
	if (dynamic_cast<A*>(ptr) != nullptr)
	{
		std::cout << "Identified class A !" << std::endl;
		return;
	}
	if (dynamic_cast<B*>(ptr) != nullptr)
	{
		std::cout << "Identified class B !" << std::endl;
		return;
	}
	if (dynamic_cast<C*>(ptr) != nullptr)
	{
		std::cout << "Identified class C !" << std::endl;
		return;
	}
	std::cout << "Could not identify pointer !" << std::endl;
}

void	identify(Base& ref)
{
	try {
		(void) dynamic_cast<A&>(ref);
		std::cout << "Identified class A !" << std::endl;
		return;
	} catch (std::bad_cast& e) {}
	try {
		(void) dynamic_cast<B&>(ref);
		std::cout << "Identified class B !" << std::endl;
		return;
	} catch (std::bad_cast& e) {}
	try {
		(void) dynamic_cast<C&>(ref);
		std::cout << "Identified class C !" << std::endl;
		return;
	} catch (std::bad_cast& e) {}
	std::cout << "Could not identify reference !" << std::endl;
}

int	main(void)
{
	std::srand(std::time(nullptr));

	Base* b = generate();
	Base* base = new Base;

	identify(b);
	identify(*b);

	identify(base);
	identify(*base);
}
