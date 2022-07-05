/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 14:30:07 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/05 14:47:04 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(std::string name);
		Zombie(const Zombie&);
		~Zombie(void);
		Zombie& operator=(const Zombie&);

		void	announce(void) const;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif
