/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 13:57:35 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/31 14:00:42 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

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
		~Form(void);
		Form& operator=(const Form&);

		// Getters
		const std::string&	getName(void) const;
		const bool&			isSigned(void) const;
		const int&			

		// Setters

		// Methods

};
