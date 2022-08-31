/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:30:23 by mrattez           #+#    #+#             */
/*   Updated: 2022/08/23 13:46:55 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria*	_materias[4];

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource&);
		~MateriaSource(void);
		MateriaSource& operator=(const MateriaSource&);

		// Getters

		// Setters

		// Methods
		void		learnMateria(AMateria*);
		AMateria*	createMateria(const std::string&);

};
