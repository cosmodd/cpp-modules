/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 10:43:49 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/31 13:37:10 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string&, int);
		Bureaucrat(const Bureaucrat&);
		~Bureaucrat(void);
		Bureaucrat& operator=(const Bureaucrat&);

		// Getters
		const std::string&	getName(void) const;
		int					getGrade(void) const;

		// Setters

		// Methods
		void	incrementGrade(void);
		void	decrementGrade(void);

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
};

std::ostream&	operator<<(std::ostream&, const Bureaucrat&);
