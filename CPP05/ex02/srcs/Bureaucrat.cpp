/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:54:25 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 11:45:16 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void):
	_name("Thierry"),
	_grade(150)
{
	std::cout << "\e[1;37;44m 👨‍🎓 Bureaucrat default constructor called \e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade):
	_name(name)
{
	if (grade < 1) throw Bureaucrat::GradeTooHighException();
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	std::cout << "\e[1;37;44m 👨‍🎓 Bureaucrat constructor called \e[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref):
	_name(ref._name)
{
	this->_grade = ref.getGrade();
	std::cout << "\e[1;37;43m 👨‍🎓 Bureaucrat copy constructor called \e[0m" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "\e[1;37;41m 👨‍🎓 Bureaucrat destructor called \e[0m" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref)
{
	this->_grade = ref.getGrade();
	return *this;
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& inst)
{
	os << inst.getName() << ", bureaucrat grade " << inst.getGrade();
	return os;
}

// Getters
const std::string&	Bureaucrat::getName(void) const
{
	return this->_name;
}

int	Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

// Setters

// Methods
void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1) throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150) throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm(Form& form)
{
	if (form.isSigned())
	{
		std::cout << this->_name << " cannot sign " << form.getName() << " because it is already signed" << std::endl;
		return;
	}
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed '" << form.getName() << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't sign '" << form.getName() << "' because '" << e.what() << "'" << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed '" << form.getName() << "'" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->_name << " couldn't execute '" << form.getName() << "' because '" << e.what() << "'" << std::endl;
	}
}

// Exceptions
const char*	Bureaucrat::GradeTooHighException::what(void) const throw ()
{
	return "Grade is too high !";
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw ()
{
	return "Grade is too low !";
}
