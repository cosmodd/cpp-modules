#include "RPN.hpp"

RPN::RPN(const std::string& expression):
	_expression(expression)
{}

RPN::RPN(const RPN& ref):
	_expression(ref._expression),
	_numbers(ref._numbers)
{}

RPN::~RPN(void)
{}

RPN& RPN::operator=(const RPN& ref)
{
	this->_expression = ref._expression;
	this->_numbers = ref._numbers;
	return *this;
}

// Getters
int	RPN::getResult(void) const
{
	if (this->_numbers.empty())
		return 0;
	return this->_numbers.top();
}

// Setters

// Methods
bool	RPN::calculate(void)
{
	std::string::const_iterator	it = _expression.begin();
	int							value = 0;
	bool						waitingForOperator = false;

	value = *it - '0';
	_numbers.push(value);
	it++;

	for (; it != _expression.end(); it++)
	{
		if (std::isspace(*it))
			continue;

		if (std::isdigit(*it) && !waitingForOperator)
		{
			value = *it - '0';
			_numbers.push(value);
			waitingForOperator = true;
		}
		else if (std::strchr("+-*/", *it) && waitingForOperator)
		{
			char	operatorChar = *it;
			int		firstNumber = _numbers.top(); _numbers.pop();
			int		secondNumber = _numbers.top(); _numbers.pop();

			switch (operatorChar)
			{
				case '+':
					_numbers.push(secondNumber + firstNumber);
					break;
				case '-':
					_numbers.push(secondNumber - firstNumber);
					break;
				case '*':
					_numbers.push(secondNumber * firstNumber);
					break;
				case '/':
					_numbers.push(secondNumber / firstNumber);
					break;
				default:
					return false;
			}

			waitingForOperator = false;
		}
		else
			return false;
	}

	return true;
}

bool	RPN::isValidExpression(const std::string& expression)
{
	if (expression.empty())
		return false;

	if (!std::isdigit(expression[0]))
		return false;

	for (std::string::const_iterator it = expression.begin(); it != expression.end(); it++)
	{
		if (!std::isdigit(*it) && !std::isspace(*it) && !std::strchr("+-*/", *it))
			return false;
	}
	return true;
}
