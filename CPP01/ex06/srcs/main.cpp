/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:04:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/12 11:36:37 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	
	if (ac < 2)
	{
		std::cout << "You must specify a level !" << std::endl;
		return (EXIT_SUCCESS);
	}
	harl.filter(av[1]);
	return (EXIT_SUCCESS);
}
