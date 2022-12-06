/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:31:06 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:50:48 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		std::string	_formNames[3];
		Form*		(*_formCreators[3])(const std::string&);

	public:
		Intern(void);
		Intern(const Intern&);
		~Intern(void);
		Intern& operator=(const Intern&);

		// Getters

		// Setters

		// Methods
		Form*	makeForm(const std::string&, const std::string&) const;

};
