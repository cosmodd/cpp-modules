/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 09:06:00 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/12 11:36:44 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		std::string	_levels[4];
		void		(Harl::*_pointers[4])(void);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);

	public:
		Harl(void);
		Harl(const Harl&);
		~Harl(void);
		Harl& operator=(const Harl&);

		void	complain(std::string level);
		void	filter(std::string level);
};

#endif // HARL_HPP