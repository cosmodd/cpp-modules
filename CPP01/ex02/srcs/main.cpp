/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:29:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 09:10:23 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string*	brainptr = &brain;
	std::string&	brainref = brain;

	std::cout << "Addresses:" << std::endl;
	std::cout << " - string: " << &brain << std::endl;
	std::cout << " - strPTR: " << brainptr << std::endl;
	std::cout << " - strREF: " << &brainref << std::endl;
	std::cout << std::endl;
	std::cout << "Values:" << std::endl;
	std::cout << " - string: \"" << brain << "\"" << std::endl;
	std::cout << " - strPTR: \"" << *brainptr << "\"" << std::endl;
	std::cout << " - strREF: \"" << brainref << "\"" << std::endl;
	return (EXIT_SUCCESS);
}