/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:06:42 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 13:54:49 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	private:
		std::string	_target;

	public:
		RobotomyRequestForm(const std::string&);
		RobotomyRequestForm(const RobotomyRequestForm&);
		~RobotomyRequestForm(void);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);

		// Getters

		// Setters

		// Methods
		static Form*	newForm(const std::string& target);
		void			execute(const Bureaucrat& executor) const;
};
