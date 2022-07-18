#include <string.h>
/**
 * _strspn - the function to will return number of bytes
 * @s: the string to be searched through with accept
 * @accept: the substring to search
 * Return: the number of bytes in initial segment of string s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt;

	byt = strspn(s, accept);
	return (byt);
}

