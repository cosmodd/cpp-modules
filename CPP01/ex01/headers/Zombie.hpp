/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrattez <mrattez@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 08:23:28 by mrattez           #+#    #+#             */
/*   Updated: 2022/07/07 08:41:01 by mrattez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>

class Zombie
{

private:
	std::string	_name;

public:
	Zombie(void);
	Zombie(std::string name);
	Zombie(const Zombie&);
	~Zombie(void);
	Zombie& operator=(const Zombie&);

	// Getters
	std::string	getName(void) const;
	
	// Setters
	void	setName(std::string newName);

	// Methods
	void	announce(void) const;

};

Zombie*	zombieHorde(int n, std::string name);

#endif // ZOMBIE_HPP