/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:04:27 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/12 10:26:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl		harl;
	std::string	input;

	while (!std::cin.eof() && input != "exit")
	{
		std::getline(std::cin, input);
		harl.complain(input);
	}
	return (EXIT_SUCCESS);
}
