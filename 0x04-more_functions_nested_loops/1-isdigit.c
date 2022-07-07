#include <ctype.h>
/**
 * _isdigit - checks if the argument passed is a digit
 * @c: The argument passed
 *
 * Return: 1 if digit, 0 if otherwise
 */


int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
