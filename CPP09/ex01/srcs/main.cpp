#include <iostream>

#include "RPN.hpp"

// ERRORS
#define INVALID_EXPRESSION	"invalid expression"

void	usage(void)
{
	std::cout << "\e[1;37;44m Usage \e[0m ./rpn \"expression\"" << std::endl;
	std::cout << std::endl;
	std::cout << "Expression must be composed of numbers and operators: +, -, *, /." << std::endl;
}

void	error(const std::string& message)
{
	std::cout << "\e[1;37;41m Error \e[0m " << message << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		usage();
		return (1);
	}

	std::string	expression = av[1];

	if (!RPN::isValidExpression(expression))
	{
		error(INVALID_EXPRESSION);
		return (1);
	}

	RPN	rpn(expression);

	if (!rpn.calculate())
	{
		error(INVALID_EXPRESSION);
		return (1);
	}

	std::cout << rpn.getResult() << std::endl;

	return (EXIT_SUCCESS);
}
