/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:05:57 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:55:07 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(const std::string&);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);

		// Getters

		// Setters

		// Methods
		static Form*	newForm(const std::string& target);
		void			execute(const Bureaucrat& executor) const;

		// Exceptions
		class FileCreationException: public std::exception
		{
			public:
				const char*	what() const throw ();
		};

};
