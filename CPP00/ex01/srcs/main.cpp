/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:49:08 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/05 10:19:32 by mrattez          ###   ########.fr       */
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

static std::string	prompt_input(const std::string& prompt)
{
	std::string	input;

	std::cout << prompt;
	std::getline(std::cin, input);
	return input;
}

int main(void)
{
	PhoneBook	phoneBook;
	std::string	command;

	print_screen();
	std::cout << "\e[s";
	while (true)
	{
		std::cout << ": ";
		std::getline(std::cin, command);
		if (std::cin.eof())
			break;
		std::cout << "\e[u\e[0J";
		if (command == "ADD")
		{
			Contact		contact = Contact();
			std::string	input;

			while ((input = prompt_input("First name: ")).empty())
				std::cout << "\e[u\e[0J\e[1;31mFirst name cannot be empty !\e[0m" << std::endl;
			contact.setFirstName(input);
			std::cout << "\e[u\e[0J";
			while ((input = prompt_input("Last name: ")).empty())
				std::cout << "\e[u\e[0J\e[1;31mLast name cannot be empty !\e[0m" << std::endl;
			contact.setLastName(input);
			std::cout << "\e[u\e[0J";
			while ((input = prompt_input("Nickname: ")).empty())
				std::cout << "\e[u\e[0J\e[1;31mNickname cannot be empty !\e[0m" << std::endl;
			contact.setNickname(input);
			std::cout << "\e[u\e[0J";
			while ((input = prompt_input("Phone number: ")).empty())
				std::cout << "\e[u\e[0J\e[1;31mPhone number cannot be empty !\e[0m" << std::endl;
			contact.setPhoneNumber(input);
			std::cout << "\e[u\e[0J";
			while ((input = prompt_input("Darkest Secret: ")).empty())
				std::cout << "\e[u\e[0J\e[1;31mDarkest Secret cannot be empty !\e[0m" << std::endl;
			contact.setDarkestSecret(input);
			std::cout << "\e[u\e[0J";

			phoneBook.add(contact);
			std::cout << "Contact added successfully !" << std::endl;
		}
		else if (command == "SEARCH")
		{
			Contact		query;
			std::string	input;
			int			index = 0;

			phoneBook.print();
			if (phoneBook.getContactCount() < 1) continue;
			std::cout << std::endl << "Index ? ";
			std::getline(std::cin, input);
			std::cout << "\e[u\e[0J";
			for (int i = 0; i < (int) input.length(); i++)
				if (!std::isdigit(input[i]))
				{
					std::cout << "Your input contains non numeric characters" << std::endl;
					index = -1;
					break;
				}
			if (index == -1) continue;
			index = std::atoi(input.c_str());
			if (index <= 0 || index > 8)
			{
				std::cout << "Index out of range ! Got " << index << " :/" << std::endl;
				continue;
			}
			if (index > phoneBook.getContactCount())
			{
				std::cout << "There is no n°" << index << " contact in this phonebook" << std::endl;
				continue;
			}
			query = phoneBook.getContact(index - 1);
			query.print();
		}
		else if (command == "EXIT")
			break;
		else if (command == "test")
			std::cout << "\e[u\e[0J";
		else
			std::cout << "Unknown command" << std::endl;
	}
	return (0);
}
