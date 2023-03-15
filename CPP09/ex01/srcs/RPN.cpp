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

int	RPN::getStackSize(void) const
{
	return this->_numbers.size();
}

// Setters

// Methods
bool	RPN::calculate(void)
{
	for (std::string::size_type i = 0; i < _expression.size(); i++)
	{
		if (std::isspace(_expression[i]))
			continue;

		if (std::isdigit(_expression[i]))
		{
			_numbers.push(_expression[i] - '0');
			continue;
		}

		if (_numbers.size() < 2)
			return false;

		int	first = _numbers.top();
		_numbers.pop();
		int	second = _numbers.top();
		_numbers.pop();

		switch (_expression[i])
		{
			case '+':
				_numbers.push(second + first);
				break;
			case '-':
				_numbers.push(second - first);
				break;
			case '*':
				_numbers.push(second * first);
				break;
			case '/':
				_numbers.push(second / first);
				break;
			default:
				break;
		}
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
