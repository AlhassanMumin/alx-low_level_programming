#include <string.h>
/**
 * _strpbrk - The function to search a string for a set of bytes
 * @s: the string that will be search
 * @accept: The sting to search against
 * Return: pointer to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
			
