#pragma once

#include <iostream>
#include <string>
#include <stack>

class RPN
{
	private:
		std::string		_expression;
		std::stack<int>	_numbers;

	public:
		RPN(const std::string& expression);
		RPN(const RPN& ref);
		~RPN(void);
		RPN& operator=(const RPN& ref);

		// Getters
		int	getResult(void) const;
		int	getStackSize(void) const;

		// Setters

		// Methods
		bool		calculate(void);
		static bool	isValidExpression(const std::string& expression);

};
