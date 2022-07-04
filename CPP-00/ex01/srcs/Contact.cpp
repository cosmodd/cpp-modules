/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 11:36:59 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/04 14:24:10 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{}

Contact::Contact(const Contact& rhs)
{
	(void) rhs;
	/* copy constructor */
	return;
}

Contact::~Contact(void)
{
	/* destructor code */
	return;
}

Contact& Contact::operator=(const Contact& rhs)
{
	this->_firstName = rhs._firstName;
	this->_lastName = rhs._lastName;
	this->_nickname = rhs._nickname;
	this->_phoneNumber = rhs._phoneNumber;
	this->_darkestSecret = rhs._darkestSecret;
	return *this;
}

// Getters

std::string	Contact::getFirstName(void) const
{
	return this->_firstName;
}

std::string Contact::getLastName(void) const
{
	return this->_lastName;
}

std::string Contact::getNickname(void) const
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) const
{
	return this->_darkestSecret;
}

// Setters

void	Contact::setFirstName(const std::string& firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(const std::string& lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickname(const std::string& nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string& phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string& darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

// Methods

void Contact::print(void) const
{
	// Prints all the contact's informations
	return;
}
