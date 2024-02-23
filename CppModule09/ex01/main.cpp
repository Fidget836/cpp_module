#include <iostream>
#include <stack>

int	ft_isCheck(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if (c == '-' || c == '+' || c == '*' || c == '/')
		return (1);
	else if ((9 <= c && c <= 13) || c == ' ')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Program Usage:" << std::endl;
		std::cout << "./RPN \"7 8 +\"" << std::endl;
		return (0);
	}
	std::stack<unsigned int>	s;
	char	*c;
	unsigned int	right;

	c = argv[1];
	while (ft_isCheck(*c) == 1)
	{
		if (*c >= '0' && *c <= '9')
		{
			s.push(*c - '0');
			++c;
			continue;
		}
		if ((*c == '*' || *c == '/' || *c == '+' || *c == '-') && s.size() <= 1)
		{
			std::cout << "Uncomplete expression!" << std::endl;
			return (1);
		}
		else if (*c == '*')
		{
				right = s.top();
				s.pop();
				right = s.top() * right;
				s.pop();
				s.push(right);
		}
		else if (*c == '/')
		{
				right = s.top();
				s.pop();
				right = s.top() / right;
				s.pop();
				s.push(right);
		}
		else if (*c == '+')
		{
				right = s.top();
				s.pop();
				right = s.top() + right;
				s.pop();
				s.push(right);
		}
		else if (*c == '-')
		{
				right = s.top();
				s.pop();
				right = s.top() - right;
				s.pop();
				s.push(right);
		}
		++c;
	}
	if (s.size() == 1)
		std::cout << s.top() << std::endl;
	else
		std::cout << "Uncomplete expression!" << std::endl;
}
