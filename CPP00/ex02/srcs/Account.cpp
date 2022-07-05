/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 10:39:20 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/05 13:25:43 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

/* ************************************************************************** */
/* STATIC MEMBERS                                                             */
/* ************************************************************************** */

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/* ************************************************************************** */
/* CONSTRUCTORS / DESTRUCTORS                                                 */
/* ************************************************************************** */

Account::Account(int initialDeposit):
	_amount(initialDeposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += initialDeposit;
	std::cout << "\e[32m";
	this->_displayTimestamp();
	std::cout << " "
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "created" << std::endl;
	std::cout << "\e[0m";
}

Account::~Account(void)
{
	std::cout << "\e[31m";
	this->_displayTimestamp();
	std::cout << " "
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "closed" << std::endl;
	std::cout << "\e[0m";
	return;
}

/* ************************************************************************** */
/* METHODS                                                                    */
/* ************************************************************************** */

void	Account::_displayTimestamp(void)
{
	std::time_t	time = std::time(nullptr);
	tm			stm = *std::localtime(&time);
	std::cout << std::put_time(&stm, "[%Y%m%d_%H%M%S]");
}

void	Account::displayStatus(void) const
{
	std::cout << "\e[34m";
	this->_displayTimestamp();
	std::cout << " "
		<< "index:" << this->_accountIndex << ";"
		<< "amount:" << this->_amount << ";"
		<< "deposits:" << this->_nbDeposits << ";"
		<< "withdrawals:" << this->_nbWithdrawals << std::endl;
	std::cout << "\e[0m";
}

int	Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::makeDeposit(int deposit)
{
	std::cout << "\e[36m";
	this->_displayTimestamp();
	std::cout << " "
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";"
		<< "deposit:" << deposit << ";"
		<< "amount:" << this->_amount + deposit << ";"
		<< "nb_deposits:" << ++this->_nbDeposits<< std::endl;
	std::cout << "\e[0m";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "\e[35m";
	this->_displayTimestamp();
	std::cout << " "
		<< "index:" << this->_accountIndex << ";"
		<< "p_amount:" << this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		std::cout << "\e[0m";
		return (false);
	}
	std::cout << "withdrawal:" << withdrawal << ";"
		<< "amount:" << this->_amount - withdrawal << ";"
		<< "nb_withdrawals:" << ++this->_nbWithdrawals << std::endl;
	std::cout << "\e[0m";
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;
	return (true);
}

/* ************************************************************************** */
/* STATIC METHODS                                                             */
/* ************************************************************************** */

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " "
		<< "accounts:" << Account::getNbAccounts() << ";"
		<< "total:" << Account::getTotalAmount() << ";"
		<< "deposits:" << Account::getNbDeposits() << ";"
		<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}
