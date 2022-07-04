/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:49:08 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/04 14:17:52 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

static void	print_screen(void)
{
	std::cout << "\e[2J\e[H";
	std::cout << "Welcome to your phonebook" << std::endl;
	std::cout << std::setw(7) << "ADD" << " -> Add a new contact" << std::endl;
	std::cout << std::setw(7) << "SEARCH" << " -> Search a contact" << std::endl;
	std::cout << std::setw(7) << "EXIT" << " -> Exit the program" << std::endl;
	std::cout << std::endl;
}

int main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	print_screen();
	while (true)
	{
		std::cout << ": ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		if (command == "ADD")
		{
			Contact		contact = Contact();
			std::string	input;

			std::cout << "First name: ";
			std::getline(std::cin, input);
			contact.setFirstName(input);
			std::cout << "\e[1A\e[2K\rLast name: ";
			std::getline(std::cin, input);
			contact.setLastName(input);
			std::cout << "\e[1A\e[2K\rNickname: ";
			std::getline(std::cin, input);
			contact.setNickname(input);
			std::cout << "\e[1A\e[2K\rPhone number: ";
			std::getline(std::cin, input);
			contact.setPhoneNumber(input);
			std::cout << "\e[1A\e[2K\rDarkest secret: ";
			std::getline(std::cin, input);
			contact.setDarkestSecret(input);
			phoneBook.add(contact);
			std::cout << "\e[1A\e[2K\rContact added" << std::endl;
		}
		else if (command == "SEARCH")
		{
			phoneBook.print();
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}
