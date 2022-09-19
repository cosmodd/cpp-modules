/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:36:17 by mrattez           #+#    #+#             */
/*   Updated: 2022/09/19 09:27:36 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void):
	_name("Trust and Safety"),
	_signed(false),
	_reqGradeToSign(150),
	_reqGradeToExec(150)
{
	std::cout << "\e[1;37;44m 🧾 Form default constructor called \e[0m" << std::endl;
}

Form::Form(const std::string& name, int reqGradeToSign, int reqGradeToExec):
	_name(name),
	_signed(false),
	_reqGradeToSign(reqGradeToSign),
	_reqGradeToExec(reqGradeToExec)
{
	if (reqGradeToSign < 1 || reqGradeToExec < 1) throw Form::GradeTooHighException();
	if (reqGradeToSign > 150 || reqGradeToExec > 150) throw Form::GradeTooLowException();
	std::cout << "\e[1;37;44m 🧾 Form constructor called \e[0m" << std::endl;
}

Form::Form(const Form& ref):
	_name(ref.getName()),
	_signed(ref.isSigned()),
	_reqGradeToSign(ref.getReqGradeToSign()),
	_reqGradeToExec(ref.getReqGradeToExec())
{
	std::cout << "\e[1;37;43m 🧾 Form copy constructor called \e[0m" << std::endl;
}

Form::~Form(void)
{
	std::cout << "\e[1;37;41m 🧾 Form destructor called \e[0m" << std::endl;
}

Form& Form::operator=(const Form& ref)
{
	this->_signed = ref.isSigned();
	return *this;
}

// Getters
const std::string&	Form::getName(void) const
{
	return this->_name;
}

const bool&	Form::isSigned(void) const
{
	return this->_signed;
}

const int&	Form::getReqGradeToSign(void) const
{
	return this->_reqGradeToSign;
}

const int&	Form::getReqGradeToExec(void) const
{
	return this->_reqGradeToExec;
}

// Setters

// Methods
void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->_reqGradeToSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
	// std::cout << "\e[1;37;44m 🧾 " << this->_name << " \e[0m Signed by '" << bureaucrat.getName() << "'" << std::endl;
}

// Exceptions
const char*	Form::GradeTooHighException::what(void) const throw ()
{
	return "Bureaucrat grade is too high !";
}

const char*	Form::GradeTooLowException::what(void) const throw ()
{
	return "Bureaucrat grade is too low !";
}

