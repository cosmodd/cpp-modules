/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:57:35 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:59:41 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_reqGradeToSign;
		const int			_reqGradeToExec;

	public:
		Form(void);
		Form(const std::string&, int, int);
		Form(const Form&);
		virtual ~Form(void);
		Form& operator=(const Form&);

		// Getters
		const std::string&	getName(void) const;
		const bool&			isSigned(void) const;
		const int&			getReqGradeToSign(void) const;
		const int&			getReqGradeToExec(void) const;

		// Setters

		// Methods
		void			beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(const Bureaucrat& executor) const;

		// Exceptions
		class GradeTooHighException: public std::exception
		{
			public:
				const char*	what() const throw ();
		};

		class GradeTooLowException: public std::exception
		{
			public:
				const char*	what() const throw ();
		};

		class NotSignedException: public std::exception
		{
			public:
				const char*	what() const throw ();
		};
};

std::ostream&	operator<<(std::ostream&, const Form&);
