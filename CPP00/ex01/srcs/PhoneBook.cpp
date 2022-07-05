/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:46:36 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/05 08:41:41 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): _index(0), _contactCount(0)
{}

PhoneBook::PhoneBook(const PhoneBook& rhs)
{
	(void) rhs;
	/* copy constructor */
	return;
}

PhoneBook::~PhoneBook()
{
	/* destructor code */
	return;
}

PhoneBook& PhoneBook::operator=(const PhoneBook& rhs)
{
	(void) rhs;
	/* copy members */
	return *this;
}

// Getters

int	PhoneBook::getContactCount(void) const
{
	return this->_contactCount;
}

// Methods

void	PhoneBook::add(const Contact& contact)
{
	this->_contacts[this->_index] = contact;
	this->_index++;
	this->_index %= 8;
	if (this->_contactCount < 8)
		this->_contactCount++;
	return;
}

Contact&	PhoneBook::getContact(int index)
{
	return this->_contacts[index];
}

static std::string	truncateString(std::string str, int size)
{
	if ((int) str.length() > size)
	{
		str = str.substr(0, size - 1);
		str += ".";
	}
	return (str);
}

void	PhoneBook::print(void) const
{
	if (this->_contactCount == 0)
	{
		std::cout << "No contacts in your phonebook" << std::endl;
		return;
	}
	std::cout << std::setw(10) << std::right << "Index" << " | ";
	std::cout << std::setw(10) << std::right << "First Name" << " | ";
	std::cout << std::setw(10) << std::right << "Last Name" << " | ";
	std::cout << std::setw(10) << std::right << "Nickname";
	std::cout << std::endl;
	std::cout << std::string(49, '-') << std::endl;
	for (int i = 0; i < this->_contactCount; i++)
	{
		std::cout << std::setw(10) << std::right << i + 1;
		std::cout << " | ";
		std::cout << std::setw(10) << std::right << truncateString(this->_contacts[i].getFirstName(), 10);
		std::cout << " | ";
		std::cout << std::setw(10) << std::right << truncateString(this->_contacts[i].getLastName(), 10);
		std::cout << " | ";
		std::cout << std::setw(10) << std::right << truncateString(this->_contacts[i].getNickname(), 10);
		std::cout << std::endl;
	}
}
