/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:17:58 by mrattez           #+#    #+#             */
/*   Updated: 2022/12/06 15:33:56 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base
{
	public:
		virtual ~Base(void) {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
