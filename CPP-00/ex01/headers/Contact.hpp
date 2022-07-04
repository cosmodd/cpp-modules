#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

	public:
		Contact();
		Contact(const Contact&);
		~Contact();
		Contact& operator=(const Contact&);

		// Getters
		std::string	getFirstName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getDarkestSecret(void) const;

		// Setters
		void	setFirstName(const std::string&);
		void	setLastName(const std::string&);
		void	setNickname(const std::string&);
		void	setPhoneNumber(const std::string&);
		void	setDarkestSecret(const std::string&);

		// Methods
		void print(void) const;
};

#endif
