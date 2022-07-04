#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

#include "Contact.hpp"

class PhoneBook
{
	private:
		int		_index;
		int		_contactCount;
		Contact	_contacts[8];

	public:
		PhoneBook();
		PhoneBook(const PhoneBook&);
		~PhoneBook();
		PhoneBook& operator=(const PhoneBook&);

		// Methods
		void	add(const Contact&);
		Contact	get(int) const;
		void	print(void);
};

#endif
