#include <string.h>
#include <ctype.h>
/**
 * string_toupper - it will convert a string to upper case
 * @str: the string to be converted
 * Return: always an upper case
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}

