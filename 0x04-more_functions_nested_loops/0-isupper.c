#include <ctype.h>
/**
 * _isupper - checks if a character passed in is upper case
 *
 * @c: The character passed as argument
 *
 * Return: 1 if the character is upper, 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
