/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:30:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/11/22 13:08:53 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "  \e[1;37;46m Usage \e[0m" << std::endl << std::endl;
		std::cout << "  \e[3;90m" << av[0] << "\e[0m \e[1;32m<filterLevel>\e[0m" << std::endl;
		return (EXIT_FAILURE);
	}

	Harl	harl;
	harl.filter(av[1]);

	return (EXIT_SUCCESS);
}
