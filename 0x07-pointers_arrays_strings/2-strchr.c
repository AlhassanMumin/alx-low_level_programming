#include <string.h>
/**
 * _strchr -  the function to locate a character in a string
 * @s: the string  to be searhed in for a character
 * @c: the character that will be searched
 * Return: Returns a pointer to the first occurance of a character
 */
char *_strchr(char *s, char c)
{
	int index = 0;
	char *chr = '\0';

	while (*(s + index))
	{
		if (s[index] == c)
		{
			return (s + index);
		}
		index += 1;
	}

	return (chr);
}
